
// time complexity =O(n)
//space compleity = O(1)



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int total = accumulate(nums.begin(), nums.end(), 0);
         int left_total =0;
         for(int i =0;i<nums.size();i++){
            int right_total = total - left_total - nums[i];
            if(left_total == right_total){
                return i;
            }
            left_total += nums[i];
                     }
         return -1;
    }
};