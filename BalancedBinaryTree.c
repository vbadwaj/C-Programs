int max(int a,int b){
    if(a>b)return a;
    else return b;
}
int diff(int a,int b){
    if(a>b)return a-b;
    else return b-a;
}

int height(struct TreeNode* root)
{
    if(!root) return 0;
    
    if (!root->left && !root->right) return 1;
    
   
   
        int lc= height(root->left);
        int rc= height(root->right);
        
        if (lc == -1 || rc == -1 || diff(lc, rc) > 1)
        {
            return -1;
        }
        else return max(lc, rc) + 1;     
    
}

bool isBalanced(struct TreeNode* root) {    
    if(!root || (!root -> left && !root->right)) return true;
    
    int lc = height(root->left);
    int rc = height(root->right);
    
    if(lc == -1 || rc == -1) return false;
    
    return (diff(lc, rc) <=1);
}
