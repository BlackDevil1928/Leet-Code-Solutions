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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        rightView(root, result, 0);
        return result;
    }
    
private:
    void rightView(TreeNode* curr, vector<int>& result, int currDepth) {
        if (curr == nullptr) {
            return;
        }
        if (currDepth == result.size()) {
            result.push_back(curr->val);
        }
        
        rightView(curr->right, result, currDepth + 1);
        rightView(curr->left, result, currDepth + 1);
    }
};
