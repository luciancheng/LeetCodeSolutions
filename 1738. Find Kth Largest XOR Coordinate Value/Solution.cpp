class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();

        // out of all coordinates, find the kth largest one
        // brute force is to computer all xor
        
        // find prefix sum of xors and do it in place
        priority_queue<int, vector<int>, greater<int>> pq; // want a min heap since we trying to find the k largest value

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
  
                } else if (i == 0) {
                    matrix[i][j] ^= matrix[i][j - 1];
                } else if (j == 0) {
                    matrix[i][j] ^= matrix[i - 1][j];
                } else {
                    matrix[i][j] ^= matrix[i-1][j] ^ matrix[i][j-1] ^ matrix[i - 1][j - 1];
                }

                pq.push(matrix[i][j]);
                
                if (pq.size() > k) {
                    pq.pop();
                }
            }
        }

        return pq.top();
    }
};
