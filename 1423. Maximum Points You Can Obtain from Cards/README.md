# Solution Walk Through
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

## Intuition
- since we want to find which combination of cars taken from the ends of the array of size k can yield us the highest score, we can use a sliding window to keep track
- the sliding window will have to wrap around to the start if the right index goes out of bounds so that we can count that side also

## Approach
- get sliding window startpoint which is length - k
- wrap around until length + k
- find the total of all of that

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



