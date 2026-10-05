class Solution {
public:
    string removeDuplicates(string s) {
       string ch;
        for(int i =0;i<s.size();i++){
            if(!ch.empty() && ch.back()==s[i]){
                ch.pop_back(); 
            }
            else{
                ch.push_back(s[i]);
            }
        }
        return ch;
    }
};