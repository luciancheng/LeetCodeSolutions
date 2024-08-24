# Solution Walk Through
https://leetcode.com/problems/cheapest-flights-within-k-stops/

## Intuition
- for the cheapest flights, use Dijkstras algorithm to be greedy, but this might be slow
- for a faster run time, just use a regular BFS and keep track of the current best cost of each path we can get to a certain node from the src
- do this by using a queue, and passing in state variables for the current stops, the current price and the node we are on
- this way we can avoid the log term and just run in V + E time instead of (V+E)*logV

## Approach
- create an adjacency list of all airport edges
- use a queue for fastest run time and save the best price form src to our node in a array for price and change the price if we can find a lower price

## Time Complexity
$O((n+m)log(n))$

## Space Complexity
$O(n)$



