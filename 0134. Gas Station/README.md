# Solution Walk Through
https://leetcode.com/problems/gas-station/

## Intuition
- if our total gass diff is < 0, then there is no way we can traverse this circuit
- what is important, is the gas difference at each index since that will let us know how viable of a start it is
- we can get greedy, such that if our current gas is greater than the maximum gas we have seen, then this is a good spot to start since we can continue accumulating gas in the next indices

## Approach
- replace gas with its difference in cost
- iterate through gas backwards
- add gas to the current gas
- keep track of the maximum gas seen, since this index will be our ideal index to start
- if the current gas exceed max gas, then this new index is a better place to start

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



