void add(struct TreeNode* new,int* sum,int c){
    if(new==NULL) return;
    if(new->left==NULL && new->right==NULL && c==1){
        (*sum)+=new->val;
        return;
    }
    add(new->left,sum,1);
    add(new->right,sum,0);
}

int sumOfLeftLeaves(struct TreeNode* root){
    if(root==NULL)return 0;
    int sum=0;
 
    add(root,&sum,0);
    return sum;
   
    
}
