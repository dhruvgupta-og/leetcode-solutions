class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int n = nums.size();
        int maax = 0;
        for( int i =0 ; i<n;i++){
            if( nums[i] == 1){
                count++;
                maax = max(maax,count);
                
            } else {
                count = 0;
            }
        }
        return maax;
        }
    
};