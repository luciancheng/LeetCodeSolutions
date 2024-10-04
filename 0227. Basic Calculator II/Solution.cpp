class Solution {
public:
    int calculate(string s) {
        // must follow bedmas

        // do 2 run throughs, one for multiplicaiton and division first, then addition and subtraction

        vector<int> nums;
        vector<char> operators;

        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                // find end of the number
                int size = 0;
                while (size < n && isdigit(s[i + size])) {
                    size++;
                }
                string sub = s.substr(i, size);
                int num = stoi(sub);

                // if we have a * or / available, do the operation 
                // if not, then just add it to the stack
                if (!operators.empty() && (operators.back() == '/' || operators.back() == '*')) {
                    char curOp = operators.back();
                    int prev = nums.back();
                    operators.pop_back();
                    nums.pop_back();

                    if (curOp == '/') {
                        num = prev / num;
                    } else {
                        num = prev * num;
                    }
                }

                nums.push_back(num);
                
                i += size - 1;
                continue;
            }

            if (s[i] != ' ') {
                operators.push_back(s[i]);
            }
        }

        // go through and do the addition now
        int res = nums[0];
        for (int i = 0; i < operators.size(); i++) {
            char op = operators[i];

            if (op == '+') {
                res = res + nums[i + 1];
            } else {
                res = res - nums[i + 1];
            }
        }

        return res;
    }
};
