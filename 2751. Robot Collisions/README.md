# Solution Walk Through
https://leetcode.com/problems/robot-collisions/?envType=daily-question&envId=2024-07-13

## Intuition
If we go in order of position, if the previous robot points right and the current one goes left, then there will be a collision
Two left robots will never collide, same with two right robots
Sort based on position
Use a stack to keep track of previously seen robots and their HP
If they can have a collision with the current one, then assess the situation to determine which one to get rid of
Add the item to the stack if it exists

## Approach

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



