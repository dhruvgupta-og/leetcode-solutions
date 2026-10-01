class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // approch 1 (xor)
        // T.C  = O(n)
        int n = nums.size();
         int ans = n;

         for(int i = 0; i < n; i++) {
            ans ^= i;
            ans ^= nums[i];
        }

         return ans;
        

        //approch 2(math)
        //  T.C  O(n)
        
         int sum = n*(n+1)/2;
        for(int i = 0 ; i<n;i++){
             sum -= nums[i];
         }
         return sum;
    }
};