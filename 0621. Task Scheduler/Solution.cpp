class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // tasks with the highest count take priority, once we do that task, update the count and do the nex thighest, before we can redo this task we need to wait n;
        unordered_map<char, int> mp;
        vector<int> h;
        queue<int> q;
        for (int i = 0; i < n; i++) q.push(0);
        int ans = 0;
        int totalTasks = 0;
        for (char i : tasks) {
            mp[i]++;
            totalTasks++;
        }

        for (auto i : mp) h.push_back(i.second);

        make_heap(h.begin(), h.end());

        while (totalTasks > 0) {
            int num = 0;
            if (!h.empty()) {
                num = h[0];
                pop_heap(h.begin(), h.end());
                h.pop_back();
                num--;
                totalTasks--;
            }

            int val = q.front();
            q.pop();
            q.push(num);
            if (val > 0) {
                h.push_back(val);
                push_heap(h.begin(), h.end());
            }
            ans++;
        }
        return ans;
    }
};
