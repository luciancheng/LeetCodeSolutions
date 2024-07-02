# Solution Walk Through
https://leetcode.com/problems/intersection-of-two-arrays-ii/?envType=daily-question&envId=2024-07-02

## Intuition
- want a way to store what value are present in another that we can match with in the other array

## Approach
- use a hashmap to count which numbers we have the frequency
- when going through the other array, if the count > 0, then we can add this number, if its 0, that means we have either added all instances already of the number was never there to begin with


## Time Complexity
$O(n)$

## Space Complexity
$O(n)$



