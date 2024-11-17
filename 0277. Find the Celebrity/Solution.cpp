/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        // easiest is brute force and construct a adjacency list with all people and try every possible combination
        // requires n^2 calls
        // if a knows b, then a is not a celebrity already and b is a candidate for a celebrity
        // the celebdriy should have indegrees = n - 1 if everyone knows the celebrity
        // each node knows themselves
        vector<int> inDegrees(n, 0);

        // need 2*n calls to test if its a celebrity, n to check if everyoneknows them and n to check if they know no one
        
        // every api call we can rule out one person as being the celebrity
        // if a knows b, then a cannot be the celebrity and b can still be
        // make sure b doesnt know a

        // if a doesnt know b, b cannot be the celebrity and a can be
        // still need to check if b knows a to see if a is still in contention for a celebrity spot

        // if a and b know each other then neither a or b is a celebrity

        int candidate = 0;

        for (int i = 1; i < n; i++) {
            if (knows(candidate, i)) {
                candidate = i;
            } 
        }

        for (int i = 0; i < n; i++) {
            if (i != candidate) {
                if (knows(candidate, i) || !knows(i, candidate)) {
                    return -1;
                }
            }
        }

        return candidate;
    }
};
