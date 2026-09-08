//question no. 53
//name = maximum subarray 
// complexity = O(n)
// approach = Kadane algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum= nums[0];
        int currentsum = nums[0];
        for(int i =1;i<nums.size();i++){
           currentsum = max(nums[i],currentsum + nums[i]);
            maxsum = max(currentsum , maxsum);
        }
        return maxsum;
    }
};