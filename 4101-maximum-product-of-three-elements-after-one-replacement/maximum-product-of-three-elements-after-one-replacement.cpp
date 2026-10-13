class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long x =100000;
        long long a = x * nums[n - 1] * nums[n - 2];
        
          return a;
    }
};