# Solution Walk Through
https://leetcode.com/problems/accounts-merge/

## Intuition
Since we need to merge accounts, this is a graph and union find problem. we can intialize a union find class, with the number of original nodes being the number of unique accounts provided to us. each node index will represent an account.
we can go through each accoun email, and map it in a hashmap to its corresponding account index. if this email has already been mapped to an index, that means this email also belongs to another account. we can then union these 2 indexes.
once we have the union of each account provided, as seen by the uf.parent, we can then proceed to map each email to an account index {0 : [], 1 : []} by using the previous hashmap created. each email, we need to find the representative of that address to see if its unioned
once we have all the indexes mapped to a list of emails, we can just append the corresponding account name to these emails and return

## Approach
- create the union find data structure
- union accounts that have the same email
- map each acocunt index to its list of emails by indexing using the representative
- join each email list with its corresponding name obtained from the account index
- return the joined list

## Time Complexity
$O(nlogn)$

## Space Complexity
$O(n)$



