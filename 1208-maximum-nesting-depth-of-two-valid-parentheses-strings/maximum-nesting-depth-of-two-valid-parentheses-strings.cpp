class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int depth=0;
        vector<int> ans;
        for(int i =0;i<seq.size();i++){
            if(seq[i] == '('){
                ans.push_back(depth%2);
                depth++;
            }
           else if(seq[i]==')'){
                    depth--;
                ans.push_back(depth%2);

                
            }
        }
        return ans;
    }
};