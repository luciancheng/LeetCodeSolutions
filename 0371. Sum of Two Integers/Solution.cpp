class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0;

        int carry = 0;
        for (int i = 0; i < 32; i++) {
            int bitA = (a >> i) & 1;
            int bitB = (b >> i) & 1;

            int totalOnes = bitA + bitB + carry;

            int bitres = 0;

            if (totalOnes == 1) {
                carry = 0;
                bitres = 1;
            } else if (totalOnes == 2) {
                carry = 1;
            } else if (totalOnes == 3){
                bitres = 1;
                carry = 1;
            }

            ans |= bitres << i;
        }
        return ans;
    }
};
