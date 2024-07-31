# Solution Walk Through
https://leetcode.com/problems/filling-bookcase-shelves/?envType=daily-question&envId=2024-07-31

## Intuition
- want a recursive call to see what the best way to fit the books on shelves
- we when we add a item, we can either start a new shelf right away, or we can keep adding to the same shelf until its empty and do a next recursive call for each
- each recursive call represents one shelf level, and once we cant fit anymore stop checking
- every time we do a recurisve call, we are starting a new shelf

## Approach
- use a dp array to store cached indices for best way to store them

## Time Complexity
$O(n * k)$

## Space Complexity
$O(n)$



