/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool symm(struct TreeNode* right,struct TreeNode* left){
    if(left==NULL && right==NULL)return true;
    else if(left==NULL || right==NULL)return false;
    else if(right->val==left->val){
           return symm(left->left, right->right) && symm(left->right, right->left);
    }
    else return false;
}

bool isSymmetric(struct TreeNode* root){
    if (root==NULL) return true;
    bool v=symm(root->right,root->left);
    return v;

}
