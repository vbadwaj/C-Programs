struct TreeNode* invertTree(struct TreeNode* root){
    if(root==NULL)return root;
    struct TreeNode* new=root->left;
    root->left=invertTree(root->right);
    root->right=invertTree(new);
    return root;
    

}
