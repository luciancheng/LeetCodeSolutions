class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return;
        if (k == 0) return;

        int restartPointer = 0;
        int cur = 0;
        int temp = nums[0];
        for (int i = 0; i < n; i++) {
            int nextPointer = (cur + k) % n;
            if (nextPointer == restartPointer) {
                nums[nextPointer] = temp;
                restartPointer++;
                cur = restartPointer % n;
                temp = nums[cur];
            } else {
                int temp2 = nums[nextPointer];
                nums[nextPointer] = temp;
                temp = temp2;
                cur = nextPointer;
            }
            
        }
    }
};
