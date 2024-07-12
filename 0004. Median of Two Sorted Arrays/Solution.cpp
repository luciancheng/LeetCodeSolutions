class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // run binary search on the smaller array
        vector<int> A = nums1;
        vector<int> B = nums2;

        int total = nums1.size() + nums2.size();
        int half = total / 2;

        if (A.size() > B.size()) {
            vector<int> temp = A;
            A = B;
            B = temp;
        }

        int l = 0;
        int r = A.size() - 1;

        while (true) {
            int i = (((float(l) + float(r)) / 2) < 0 ) ? -1 : (l + r) / 2; // pointer for A
            int j = half - i - 2; // index for B

            int Aleft = (i >= 0) ? A[i] : INT_MIN;
            int Aright = ((i + 1) < A.size()) ? A[i + 1] : INT_MAX;

            int Bleft = (j >= 0) ? B[j] : INT_MIN;
            int Bright = ((j + 1) < B.size()) ? B[j + 1] : INT_MAX;
            if (Aleft <= Bright && Bleft <= Aright) {
                if (total % 2 == 0) {
                    return (max(Aleft, Bleft) + min(Aright, Bright)) / float(2);
                } else {
                    return min(Aright, Bright);
                }
            } else if (Aleft > Bright) {
                r = i - 1;
            } else {
                l = i + 1;
            }
        }

        return 0;
    }
};
