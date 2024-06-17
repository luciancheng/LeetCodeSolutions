# Solution Walk Through
https://leetcode.com/problems/range-module/description/

## Intuition
- since this is pretty much just finding how many different connected sections are present in a grpah, we can just join all the groups together by using unionfind data structure

## Approach
- keep track of a visited list of nodes to avoid repeated work
- for through the nodes and if there is a 1 present, union the the 2 nodes together
- at the end, get a set to contain all the parents of the different nodes and return the size of this set

## Time Complexity
$O(n^2)$

## Space Complexity
$O(n)$



