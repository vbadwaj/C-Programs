/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if(root==NULL){
        return 0;
    }
    
    int lc=maxDepth(root->left);
    int rc=maxDepth(root->right);
    if(lc>rc)return ++lc;
    else return ++rc;

}
