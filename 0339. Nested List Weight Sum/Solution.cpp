/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    int depthSum(vector<NestedInteger>& nestedList) {
        // do recursion
        // if there is an integer at the current level, just evaluate it
        // if its another list, then we do a recursive call and increase the depth by 1 and return the value of that nested array and continue this until we reach the end
        return recur(nestedList, 1);
    }


    int recur(vector<NestedInteger> & nestedList, int depth) {
        int res = 0;

        for (int i = 0; i < nestedList.size(); i++) {
            NestedInteger candidate = nestedList[i];
            if (candidate.isInteger()) {
                res += candidate.getInteger() * depth;
            } else {
                res += recur(candidate.getList(), depth + 1);
            }
        }

        return res;
    }
};
