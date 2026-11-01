class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < n; i++) {
            count += nums[i] - nums[0];
        }
        return count;
    }
};