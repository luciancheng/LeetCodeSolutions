# Solution Walk Through
https://leetcode.com/problems/search-a-2d-matrix/description/

## Intuition
- since each row is sorted, and the first element of the next row is less than the last element of the previous, we can use binary search to find the number we want
- the trick is to convert the mid we get into its 2 components of the grid, i and j
![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/8e21d0a2-d345-4f27-8f67-d914d7a54ab0)


## Approach
- intialize l and r pointers, r will be the total size of the 2d matrix - 1, m * n -1
- find mid
- convert mid to i and j
- i can be found by doing mid / n and j can be found by doing mid % n, since the formula for getting the mid would be i*n + j = mid
- check mid and readjust left and right pointers if necessary

## Time Complexity
$O(log(n * m)$

## Space Complexity
$O(1)$



