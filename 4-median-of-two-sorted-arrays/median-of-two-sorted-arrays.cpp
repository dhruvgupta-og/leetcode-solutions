class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // TC = O((n + m) log(n + m))
        vector<int> store;
       for(int i =0;i<nums1.size();i++){
          store.push_back(nums1[i]);
       }
       for(int i =0;i<nums2.size();i++){
          store.push_back(nums2[i]);
       }
       sort(store.begin(),store.end());
       int tot = store.size();
       if(tot%2==1){
        return store[tot/2];
       }else{
        int mid1 = store[tot/2-1];
        int mid2 = store[tot/2];
        return (mid1+mid2)/2.0;
       }
{

}    }
};