# Solution Walk Through
https://leetcode.com/problems/minesweeper/?envType=company&envId=facebook&favoriteSlug=facebook-thirty-days&status=TO_DO%2CATTEMPTED

## Intuition
- If we click on a mine, we immediately just end the game, switch M to X and return the board as is
- If we are on an empty square, we need to recursively identify all other empty adjacent squares
- Only traverse a square if its E meaning we havent checked this before
- Find out locations of all mines on the field by serializing the position into a hashset
- For every recursive call, 
- if we are out of bounds, return
- If we are on a square thats not E, return because we have already looked at this square
- Find all 8 adjacent squares, and check if any of them have any mines, if they do have mines, add it to the counter
- If there are adjacent mines, we need to replace this grid spot with the number of adjacent mines, then do not do any more recursive calls since this isnt an empty square
- If there are no adjacent mines, set this square to be B for having nothing, then we can do a recursive call on all of its neighbours

## Approach

## Time Complexity
$O(n*m)$

## Space Complexity
$O(n*m)$



