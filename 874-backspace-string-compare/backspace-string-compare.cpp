class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> pt;
        for(int i =0 ;i<s.size();i++){
            if(s[i] !='#'){
                st.push(s[i]);
            }
            else if(!st.empty()){
                st.pop();
            }
        }
        for(int i =0 ;i<t.size();i++){
            if(t[i] !='#'){
                pt.push(t[i]);
            }
            else if(!pt.empty()){
                pt.pop();
            }
        }
        if(st == pt){
            return true;
        }
        else{
            return false;
        }

    }
};