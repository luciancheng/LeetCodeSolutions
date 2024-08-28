# Solution Walk Through
https://leetcode.com/problems/detect-squares/

## Intuition
- since each point is unique and we can have duplicates, ust a hashmap wth the points as the key and the value being how many times it appears
- multiply the number of appearance of relevant points to figure out how many unique ways we can make a square
- To efficienlty check, we only really need 2 points, we can find the 2 other diagonal points by interpolating based off two which represent opposite corners, and then just check if the other 2 are in the hashmap

## Approach
- store hashmap of points with the count of occurences
- iterate through for each other point and treat that as the opposite point to the current point
- interpolate to find the 2 other diagonal points, then check if those are in the hashmap
- make sure its a square by ensuring both sides are equal
- ans += multiply all occurences of other points together for number of unique ways to form this square

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



