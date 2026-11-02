class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        long long ans = LLONG_MAX;
        int n =nums.size();
        for (int i = 0; i < n; i += 2) {
            string s = to_string(nums[i]) + to_string(nums[i + 1]);
            ans = min(ans, stoll(s));
        }
        return ans;
    }
};