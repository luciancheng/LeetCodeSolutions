# Solution Walk Through
https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/?envType=daily-question&envId=2024-07-30

## Intuition
- want to to find minimum number of deletions required so that all of the a are before all of the b
- can do a partition, checking at every index, seeing the amount of a are to the left and b to the right, since thats the split that we want
- and for every parition, check how many b are to the left since thats the a designated partition, and how many a are in the right, the b designated parition
- the number of deletions required for that index will be the sum of the number of b in the left side and number of a in the right side, continue this and find the minimum

## Approach
- iterate through the string once, and create a prefix array for the count of the a and the count of the b, so that we can quickly access the current amount of each letter seen when doing the index partitioning
- for index partitioning, anyting left and including current index is counted as left to the left
- we can get the number of a and b on left by accessing prefix of their array at i, and we can find the number of a on the right and b on the right by subtracing prefix[i] for a and b from its total a and b count
- find the total number of wrongly positioned letters and sum them up (num of b on left + num of a on right)

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



