# Solution Walk Through
https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/?envType=daily-question&envId=2024-08-29

## Intuition
- find all connected components there are present, and how many components we have
- we are able to remove all stones in a component except for 1, because then that would not be in any row or col with other stones, so for every connect component we can remove # of nodes - 1
- we can use a union find data structure to combine component together based on if there is a stone placed correctly
- have some sort of adjacency array of a hashtable, for each row and col, get all rocks that have either of those

## Approach
- iterate through, and for each stone, get its x and y coordinate
- have 2 sepearte hashmaps, one for seen x axis and one for seen y as the key, and then the value is a list of corresponding indices in the stones array
- This is so that we have quick look up for any x or y that would be relevant to a stone that we are analyzing, and we can get its index to perform the union find
- for each stone at i, for any matching x or y, union it with all nodes that have that x or y value
- find all unique parents
- for each unique parent, they own a connected component, and then just get the rank of the component - 1 and that is how many rocks we can get rid of in this component

## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



