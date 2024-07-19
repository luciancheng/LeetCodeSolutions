# Solution Walk Through
https://leetcode.com/problems/reconstruct-itinerary/submissions/1326348167/

## Intuition
- this is a graph problem, where want to travel all edges
- we have traversed all edges when the ans vector has of a size of tickets size + 1
- the first answer we find is the lexicographically smallest one if we sort the string adjacaent airports in the adjacency list
- if we traverse the adjaceny list starting from JFK in sorted order, we will get lexicographically smallest route

## Approach
- use a hashmap with a multiset to keep adjacent airports in sorted order
- run a dfs starting at JFK, and iterating through all adjacent airports remaining and move there, pop it from the set, call dfs on next airport, after recursive call, add it back to set

## Time Complexity
$O(E^2)$

## Space Complexity
$O(E)$



