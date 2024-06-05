# Solution Walk Through
https://leetcode.com/problems/max-points-on-a-line/

## Intuition
for points to be on the same line, their slopes and y intercepts must match with other points

## Approach
- for each pair of points, calculate the slope and y intercept, then in a nexted unordered_map (hash table) we can point the number of points that map to those keys
- if another pair of points map to that specific spot in the hash table, we can increment the number of points by 1 since we know one of the points was already accounted for
- calcualte the maximum amongst all of the mapped squares

## Time Complexity
$O(n^2)$ 

## Space Complexity
$O(n^2)$ 


