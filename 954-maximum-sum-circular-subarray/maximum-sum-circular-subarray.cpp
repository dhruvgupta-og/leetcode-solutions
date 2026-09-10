class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currmax = nums[0];
        int currmin = nums[0];
        int maxsum = nums[0];
        int minsum =nums[0];
        int tot_sum = nums[0];
    for(int i =1;i<n;i++){
        currmax = max(nums[i],currmax+nums[i]);
        currmin = min(nums[i],currmin+nums[i]);
        maxsum = max(maxsum , currmax);
        minsum = min(minsum,currmin);
        tot_sum += nums[i];
            }
            int circularsum = tot_sum-minsum;
   
    if(circularsum == 0 ){
        return maxsum;
    }
    return max(maxsum,circularsum);
     }
};