# Solution Walk Through
https://leetcode.com/problems/minimum-interval-to-include-each-query/

## Intuition
- go through queries and intervals in a smart way, we can sort it so that we only include queries with relevant intervals only, since we dont want to check an interval that has no way of being relevant to the query
- use a heap to sort the query sizes, min heap
- line sweep
- condition for adding interval is that it has a left value less than the query
- and condition for popping an interval is that it has a right that is less than the query, meaning the query doesnt fit in it
- important to pop irrelvant queries after pushing relevant ones or else we might get an interval like [4,5] for a query for 7

## Approach

## Time Complexity
$O(nlogn + qlogq)$

## Space Complexity
$O(n + q)$



