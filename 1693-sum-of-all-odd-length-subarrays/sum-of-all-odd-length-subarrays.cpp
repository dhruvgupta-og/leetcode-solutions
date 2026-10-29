class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int final_sum = 0;

        for(int i=0;i<arr.size();i++){
            int sum = 0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if((j-i)%2==0){
                    final_sum+=sum;
                }
            }
        }
        return final_sum;
    }
};