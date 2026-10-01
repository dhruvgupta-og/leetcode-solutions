class Solution {
public:
    bool isPowerOfTwo(int n) {
        // approch 1 (bit wise )
        // T.C o(1)
         return n>0 && (n&(n-1) )==0;
          

        //   approch 2 (recursion)
        //   T.C O(log(n))
        if(n<=0){
            return false;
        }
        if(n == 1){
            return true;
        }
        return n%2 == 0 && isPowerOfTwo(n/2);
    }
};