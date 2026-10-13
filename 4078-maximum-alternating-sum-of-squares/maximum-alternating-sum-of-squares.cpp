class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i =0;i<n;i++){
            nums[i] =abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int i =0;
        int j=n-1;
        long long res=0;
        while(i<=j){
            long long x = nums[j];
            res += x*x;
            j--;
            if (i <= j) {
                long long x = nums[i];
                res -= x*x;
                i++;
            }
        }
   return res;

    }
};