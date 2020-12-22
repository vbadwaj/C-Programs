int * inorder(struct TreeNode * root, int * tree, int * returnSize){
    if (root == NULL)
        return tree;
    tree = inorder(root->left, tree, returnSize);
    tree[0] = root->val;
    tree++;
    *returnSize = *returnSize + 1;
    return inorder(root->right, tree, returnSize);
}
int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int * tree = malloc(sizeof(int) * 1000);
    *returnSize = 0;
    inorder(root, tree, returnSize);
    return tree;
}
