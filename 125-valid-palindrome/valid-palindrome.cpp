class Solution {
public:
bool isalpha(char ch) {
        ch = tolower(ch);

        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int left= 0;
        int right = n- 1;
        while(left<right){
            if(!isalpha(s[left])){
                 left++ ;
                 continue;}
            else if(!isalpha(s[right])){
                 right--;
                  continue;
            }
            else{ 
                if(tolower(s[left]) != tolower(s[right])){
                    return false;
                    
                }
                left ++;
                    right--;
                }
        }
       
         

     return true;
    }
};