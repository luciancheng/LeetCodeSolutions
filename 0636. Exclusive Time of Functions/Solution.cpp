class Log {
    public:
    int start;
    int end;
    bool isStart;
    int id;
    int wastedTime;

    Log(const string & log) {
        start = -1;
        end = -1;
        isStart = false;
        wastedTime = 0;
        stringstream ss(log);
        string p;
        vector<string> parsed;

        while (getline(ss, p, ':')) {
            parsed.push_back(p);
        }

        if (parsed[1] == "start") {
            isStart = true;
            start = stoi(parsed[2]);
        } else {
            end = stoi(parsed[2]);
        }

        id = stoi(parsed[0]);
    }
};

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);

        // want a way to parse logs, most likely in chronological order of times
        // when we start a task, make sure we can check if its started and if it ends then we can stop that also

        // will probably call start before end
        // if we encounter a start, add it to a hashmap based on index mapped to its start time, so when it ends we can call it
        // always equal amount of starts to end
        // 1 process at a time?
        stack<Log *> st;
        for (const auto & log : logs) {
            Log * cur = new Log(log);

            if (cur->isStart) {
                st.push(cur);
            } else {
                // get the top of the stack
                Log * top = st.top();
                st.pop();

                int totalTime = cur->end - top->start + 1;
                ans[cur->id] += totalTime - top->wastedTime;

                // if the stack isnt empty after the pop, increment the next logs wasted time by the total time that this was running for from start to end
                if (!st.empty()) {
                    ans[st.top()->id] -= totalTime; // essentially get ridof wasted time that was spent running other threads during the time between the start and stop of this id
                }
            }
        }

        return ans;
    }
};
