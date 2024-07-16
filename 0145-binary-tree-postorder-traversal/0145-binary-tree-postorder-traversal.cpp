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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> st1, st2;
        
        if (root == NULL) {
            return result;
        }
        
        st1.push(root);
        
        while (!st1.empty()) {
            TreeNode* top = st1.top();
            st1.pop();
            st2.push(top);
            
            if (top->left != NULL) {
                st1.push(top->left);
            }
            
            if (top->right != NULL) {
                st1.push(top->right);
            }
        }
        
        while (!st2.empty()) {
            result.push_back(st2.top()->val);
            st2.pop();
        }
        
        return result;
    }
};
