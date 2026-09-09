//Time: O(n)
//Space: O(1)


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = INT_MIN;
        int n  = nums.size();
        int pre = 1;
        int suff = 1;
        for(int i =0;i<n;i++){
             if (pre == 0 ) pre =1 ;
             if (suff == 0) suff =1;
              pre *= nums[i];
              suff *= nums[n-1-i];
              maxproduct = max(maxproduct , max(pre, suff));
        }
        return maxproduct;


    }
};