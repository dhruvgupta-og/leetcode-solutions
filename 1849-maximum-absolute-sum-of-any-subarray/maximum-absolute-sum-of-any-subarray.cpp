class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
          int currentmax = nums[0];
          int currentmin = nums[0];
          int maxsum = nums[0];
          int minsum = nums[0];
          for(int i =1;i<nums.size();i++){
            currentmax = max(nums[i],currentmax +nums[i]);
             currentmin = min(nums[i],currentmin +nums[i]);
            maxsum = max (currentmax , maxsum);
             minsum = min (currentmin , minsum);
          }
          return max (maxsum , abs(minsum));
    }
};