# Solution Walk Through
https://leetcode.com/problems/making-a-large-island/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- find the size of each island,
- add an island id for each different island so we can hash the island by id to retrieve the specific islands size
- second phase is to try and place a land in any water squares, 0s, and add all sizes of unique adjacent islands to the size

## Approach
- do a dfs to count each island size and as we are traversing, replace the 1s (which means unvisited island) to its island id which marks it as visited and pertaining to a specific island group
- after we get the size of this island, hash it with a key of the island id that we replaced it with to its size
- next phase is to find all spots with 0 and try to add a land there, and get all unique adjancent islands if they exist
- after we get all adjacent islands, we want to add up all of the sizes and get the largest one possible

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$ from recursive call stack



