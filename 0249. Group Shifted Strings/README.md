# Solution Walk Through
https://leetcode.com/problems/group-shifted-strings/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- For a sequence ot be the same, find the int shifts between 2 consecutive digits, and they should be the same, for example a to b is a difference of 1, same with b to c. for z to a, it will be a difference of -25, but since this is circular, this is also the same as just saying -25 + 26 = 1 to keep it consistent this makes abc the same as yza. This is robust to work on different circular structures
- Save these shift values in a vector and hash this vector in a set
- Would be better to use python here to hash a tuple instead of a vector since that will be O(1) time compared to O(logn)
- Keep it consistent by making all increment changes positive so its more robust to cycling

## Approach

## Time Complexity
$O(n * k)$ k is average length of the string

## Space Complexity
$O(n)$



