// T.C O(n)

class Solution {
public:
    bool checkValidString(string s) {
        int count1 = 0;  
        int count2 = 0;  

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                count1++;
                count2++;
            }
            else if(s[i] == ')') {
                count1--;
                count2--;
            }
            else {  // '*'
                count1--;
                count2++;
            }

            if(count2 < 0)
                return false;

            if(count1 < 0)
                count1 = 0;
        }

        return count1 == 0;
    }
};