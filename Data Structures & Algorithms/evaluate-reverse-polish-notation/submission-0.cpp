class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<string> v;

        for (string s : tokens) {
            if (s != "+" && s != "-" && s != "*" && s != "/") {
                v.push_back(s);
            }
            else {
                int b = stoi(v.back());
                v.pop_back();
                int a = stoi(v.back());
                v.pop_back();
                int ans;
                if (s == "+") ans = a + b;
                else if (s == "-") ans = a - b;
                else if (s == "*") ans = a * b;
                else ans = a / b;

                v.push_back(to_string(ans));
            }
        }

        return stoi(v[0]);
    }
};