# Solution Walk Through
https://leetcode.com/problems/most-profit-assigning-work/submissions/1291827496/?envType=daily-question&envId=2024-06-18

## Intuition
- use a greedy approach
- add the profit and difficulty tuple to a new array and sort it based on profit
- and sort the workers

## Approach
- sort profit and dififculty and the workers
- use iterate through the workers from highest skill to lowest while going through the array containing profits and difficulty
- start wiht the highest profits and work our way down depedning on if the workers can complete them
- we can be greedy here since the if the worker with the highest skill cant do a project, worker with less cant do it either so we can just continue iterateing through the project array form where the left worker ended off


## Time Complexity
$O(nlogn + klogk)$

## Space Complexity
$O(n)$



