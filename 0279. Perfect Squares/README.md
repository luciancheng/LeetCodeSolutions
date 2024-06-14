# Solution Walk Through
https://leetcode.com/problems/perfect-squares/?envType=daily-question&envId=2024-06-14

## Intuition
To make a certain number, this can be a BFS problem if we look at all possible branches it could take at the starting number, ie, doing 1^2, or 2^2... But we can do a bottom up dp appraoch to avoid redoing calculations for past numbers if we save the min moves to make each number up to that point
we can find the minimum moves needed for a number by subtracting all possible squares less than this number and seeing what the minimum moves to make the idfference is and take the minimum of that

## Approach
- make a dp array
- iterate from 1 to n
- save the minimum moves to construct each number
- for the number of interest, subtract each valid square from it and check the minimum moves it takes to make that number and find the minimum over all squares

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



