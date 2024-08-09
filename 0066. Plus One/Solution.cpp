class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        int i = n - 1;

        int carry = 1;
        do {
            int sum = digits[i] + carry;

            if (sum >= 10) {
                digits[i] = sum - 10;
                carry = 1;
            } else {
                digits[i] = sum;
                carry = 0;
            }

            i--;
        } while (i >= 0 && carry == 1);

        if (i < 0 && carry == 1) digits.insert(digits.begin(), 1);
        return digits;
    }
};
