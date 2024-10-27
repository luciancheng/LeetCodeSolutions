# Solution Walk Through
https://leetcode.com/problems/restore-ip-addresses/description/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days

## Intuition
- Use recursion to recursive try all combinations of valid placements of a dot
- We want to split it into 4 distinct sections, we can mark the end of a valid section with a period
- If at the end, we have 4 valid subsections, we will have 4 dots, we can just remove the last dot since its not needed then add the resulting string to our ans
- If at a recursive call s[i] == 0, then we must place a dot right after since having a sequence like X.00.X is not valid, and we cannot have leading 0s, so if we start at 0, this 0 has to be alone and we add a period after it
- If we are current not at a 0, then we can take at most 3 digits starting from the current idx since if we have 4 then it will exceed 255
- For each of the 3 sequences if, if they are below 255 numericallyt, then we can successfully do a recursive call and place a . after each one since its valid
- At the end, we will have reached the end of s while also having placed 4 dots which means its successful
- If we have 4 dots without reaching the end of s, this is not valid


## Approach

## Time Complexity
$O(3^n)$ at most each recursive level will only have 3 branches since we wont go beyond 3 consecutive digits and the height of the tree would only be equal to 4, which is the number of valid subsections, but it coult take up to n lenght to get to the height

## Space Complexity
$O(n)$



