# Solution Walk Through
https://leetcode.com/problems/coin-change/

## Intuition
- if we draw out a tree, we can see that there are a lot of redundant recursive calls to find the most optimal amount of coins for each amount less than the amount we want
- we know that it takes 0 coins to make amount 0
- For example, for amount 11, and given coins = [1,2,5], the best way to find out the minimum amount of coins needed for 11 is to find the minimum amount of coins needed for the each of the differences
- check the amount of coins needed for 11 - 1 = 10, 11 - 2 = 9, and 11 - 5 = 6, the minimum amount of coins will be whichever of these costs the least to make using the current coins

![image](https://github.com/luciancheng/LeetCodeSolutions/assets/121974540/9fd62cfd-2ded-4a49-b77f-8d995e2e56f2)


## Approach
- make a dp array of size amount + 1
- dp[0] = 0
- iterate through each possible amount up to the target amount
- find the optimal amount of coins to make each of those numbers with the provided coins, if its not possible, set that square as a -1 so we can skip it later on
- if there was no fit, the square will be -1, check the amount of coins needed to make each of the difference + 1 and that will be the amount of coins needed to make the current target

## Time Complexity
$O(n * target)$ 

## Space Complexity
$O(target)$ 

