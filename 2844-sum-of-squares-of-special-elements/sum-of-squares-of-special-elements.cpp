class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i =0;i<n;i++){
            if(n%(i+1)==0){
                ans.push_back(nums[i]);
            }
        }
        int sum = 0;
        for(int i =0;i<ans.size();i++ ){
            ans[i] = ans[i]*ans[i];
            sum += ans[i];

        }
        return sum;
    }
};