/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int findPath(struct TreeNode* root,int* hash){
    hash[root->val]++;
    if(root->left == NULL && root->right == NULL){
        int count = 0;
        for(int i = 1;i <= 9;i++){
            if(hash[i] % 2 == 1){
                count++;
            }
        }
        hash[root->val]--;
        if(count>1){
            return 0;
        }
        else{
            return 1;
        }
    }
    int re = 0;
    if(root->left != NULL){
        re += findPath(root->left,hash);
    }
    if(root->right != NULL){
        re += findPath(root->right,hash);
    }
    hash[root->val]--;
    return re;
}

int pseudoPalindromicPaths (struct TreeNode* root) {
    int* hash = (int*)calloc(10,sizeof(int));
    return findPath(root,hash);
}