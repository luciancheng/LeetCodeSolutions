# Solution Walk Through
https://leetcode.com/problems/diagonal-traverse-ii/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Each diagonal will have the same sum of i + j,
- We can store each position as a sum of its i + j as well as its row that we found it at, we want to go in order of sum of i+j since these present different diagonals, and within the same sum of i + j, we want to go in order of decreasing row
- Go through all spots in the grid and add it to a new array that will store its i + j, and -i and we will sort it based off of this criteria {i + j, -i, val}
- Then go through the sorted list in order and just add its corresponding value


## Approach

## Time Complexity
$O(nmlog(nm))$

## Space Complexity
$O(nm)$



