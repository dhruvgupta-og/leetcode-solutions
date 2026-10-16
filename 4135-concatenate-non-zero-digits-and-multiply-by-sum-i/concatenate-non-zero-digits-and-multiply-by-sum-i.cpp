
class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string ans = "";
        int sum = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                ans += s[i];
                sum += s[i] - '0';
            }
        }
            if (ans == "") return 0;
        return stoll(ans) * sum;
    }
};
