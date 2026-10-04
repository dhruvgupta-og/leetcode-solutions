//T.C O(n)
//approch
//1. declared a stack
// 2. traverse string if it is char push to stack
// 3. if not then pop top element 
// 4. declared ans string push stack top element 
// 5. reverse the ans string 
// 6. return ans;

class Solution {
public:
    string removeStars(string s) {
        int n =s.size();
        stack<char>st;
        for(int i = 0; i<n;i++){
             if(s[i] != '*'){
                st.push(s[i]);
             }
             else{
                st.pop();

             }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
       return ans; 
    }
};