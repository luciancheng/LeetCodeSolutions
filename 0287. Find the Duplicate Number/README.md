# Solution Walk Through
https://leetcode.com/problems/find-the-duplicate-number/

## Intuition
use a fast and slow pointer approach. Every move the slow pointer makes, the fast pointer makes 2. When they ever equal each other, that means either there is a loop, or thats the answer but we dont know.
to fix this, once we ever find fast and slow equal to each other, exit out of the loop and init another slow pointer to nums[0]. then increment both slow pointers at the same itme since they will never be on the same number.

## Approach
- fast and slow pointers initialized to nums[0]
- slow = nums[slow], fast = nums[nums[fast]] until they equal each other
- slow2 = nums[0], and increment them by one each time until they are equal, that is then our number

## Time Complexity
$O(n)$

## Space Complexity
$O(1)$



