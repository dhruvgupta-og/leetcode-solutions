/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


 // recursive approch 
//  T.C O(n)
class Solution {
public:
        vector<int> ans;
    vector<int> postorderTraversal(TreeNode* root) { 
        if(root){
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            ans.push_back(root->val); 
        }
        return ans;
    }
};

// iterative approch 
// T.C O(n)

class Solution2{
public:    
    vector<int> postorderTraversal(TreeNode* root) { 
        vector<int> ans;
        stack<TreeNode*> st;
        
        if(root || !st.empty()){
            if(root){
                st.push(root);                  
                if(root->right)
                    st.push(root->right);
            }
            root = root->left;
        }
        else{
            root = st.top();
            st.pop();
            ans.push_back(root->val);             
        }
       
        return ans;
    }
};