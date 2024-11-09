class Solution {
public:
    long long minEnd(int n, int x) {
        // must be in increasing order
        // the AND of everything in the array needs to be = x, that means these the set bits in x must be present in every number at least
        // set initial bits of x first, then just go through 1 by 1 and find the next larger number that has the same bits as x set and go up until n
        // x is our starting number, since all AND need to be x, then x will contain the necessary bits to return to x after anding
        // keep all of x bits set in all numbers while incrementally changing the other ones to get the number we want
        // trying to find the nth number int he sequence
        // if n = 3, essentially we want to fill in all gaps of 0s with the correct bits that are needed in n, 11

        // if the current spot we are trying to set is a 1, move to the next avaailable spot to the left of the bit representation
        // if its a 0, put the correct bit regardless of what it is in n

        long long res = x;

        int totalbitsN = log2(n) + 1;
        n--;

        int curBitShift = 0;
        for (int i = 0; i < totalbitsN; i++) {
            long long bit = (n >> i) & 1;

            while ((res >> curBitShift) & 1 && curBitShift < 63) { // find a open spot to place it
                curBitShift++;
            }

            res |= (bit << curBitShift);
            curBitShift++;

        }

        return res;
    }
};
