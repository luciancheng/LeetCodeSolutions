# Solution Walk Through
https://leetcode.com/problems/car-fleet/

## Intuition
- Instead of checking each dsicrete timestep, it is better if we check each cars current position and the time it will take for that specific car to reach the target destination
- if a car behind has a lower or equal ETA than a car ahead, then it will always catch up to the car ahead by the target destination and will make a fleet
- a car further back with a longer ETA will never catch up to cars ahead of it with a lower ETA
- With this ETA, we can use this to create a monotonic stack consisting of the etas of different fleets in the stack

## Approach
- sort the cars in terms of distance to the target
- travel the list in reverse, starting with the cars closest to the end working our way back
- if the stack is empty, add a car tot he stack
- if a car we are checking has a longer ETA than the top of the stack, this car will never reach the car in front, so we can make it its own fleet
- if a car has a eta <= to the top, then no need to add it to the stack since it will already make a fleet with the car ahead and then will be bottlenecked by its speed

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



