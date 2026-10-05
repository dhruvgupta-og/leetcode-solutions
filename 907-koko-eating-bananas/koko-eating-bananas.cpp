class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // T.C O(nlog(max(piles)))
    
        int l = 1;
        int r =*max_element(piles.begin(),piles.end());
        while(l<=r){
            int m = l+(r-l)/2;
             long long hours=0;
             for(int i =0;i<piles.size();i++){
                hours += (piles[i]+m-1)/m;
             }
             if(hours<=h){
                r=m-1;
             }
             else{
                l=m+1;
                }

        }
        return l;
    }
};