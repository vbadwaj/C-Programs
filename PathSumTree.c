
bool hasPathSum(struct TreeNode* root, int sum){
    if(root==NULL)return false;
    if(!root->right && !root->left && sum-root->val==0)return true;
    return (hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val));
}
