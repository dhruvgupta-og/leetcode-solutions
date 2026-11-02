class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(),nums.end());
        int count =0;
        for(int i =0;i<n;i++){
            if(nums[n/2]>nums[i]){
                count +=nums[n/2]-nums[i];
            }
           else if(nums[n/2]<nums[i]){
                count +=nums[i]-nums[n/2];
            }
        }
        return count;
    }
};