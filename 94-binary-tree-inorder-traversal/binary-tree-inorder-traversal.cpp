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
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // T.C = O(n)
         TreeNode*Node = root;
         vector<int> result;
        stack<TreeNode*> st;
        while(!st.empty() || Node != NULL){
            while(Node != NULL){
                st.push(Node);
                Node =Node -> left;
            }
            Node = st.top();
            st.pop();
            result.push_back(Node->val);
            Node = Node ->right;
        }
         return result;
    }
};