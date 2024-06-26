class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>> > mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        int l = 0;
        int r = mp[key].size() - 1;
        string ans = "";

        while (l <= r) {
            int mid = (l + r) / 2;
            if (mp[key][mid].first <= timestamp) {
                ans = mp[key][mid].second;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
