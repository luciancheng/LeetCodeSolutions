# Solution Walk Through
https://leetcode.com/problems/sort-the-jumbled-numbers/description/?envType=daily-question&envId=2024-07-24

## Intuition
- have a method to convert a given number into its mapped form for each digit, can do this using a recursive function, where the basecase would just return 0, but a special case should be considered for if nums[i] == 0
- sort an vector of pairs, the first element beging the mapped element, and the second being the index of that number in nums, since we want to maintain original order if they have the same mapped value, the index will retain order

## Approach
- go through each number, and create its proper mapping by using the recursive function and taking into account the special case of nums[i] == 0
- use the sort function on the vector of pairs {mappedNum, index}
- use a new array, and reconstruct the array by iterating through and using the mapped index to reference the correct number from nums

## Time Complexity
$O(n*k + nlogn)$

## Space Complexity
$O(n)$



