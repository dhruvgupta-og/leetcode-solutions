class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxcandy =0;
        for(int i =0;i<n;i++){
            if(candies[i]>maxcandy){
                maxcandy = candies[i];
            }
        }
        vector<bool> ans;
        for(int i =0 ;i<n;i++){
            if(candies[i]+extraCandies >= maxcandy)
               ans.push_back(true);
            else{
                ans.push_back(false);
                }
        }
        
        return ans;
    }
};