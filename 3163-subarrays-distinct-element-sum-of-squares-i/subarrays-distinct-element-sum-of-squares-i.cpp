class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            vector<int> distinct;

            for (int j = i; j < n; j++) {
                bool found = false;

                for (int k = 0; k < distinct.size(); k++) {
                    if (distinct[k] == nums[j]) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    distinct.push_back(nums[j]);
                }

                int count = distinct.size();
                ans += count * count;
            }
        }

        return ans;
    }
};