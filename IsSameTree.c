bool isSameTree(struct TreeNode* p, struct TreeNode* q){
     if(p==NULL && q==NULL){
         return true;
     }
    if (p==NULL || q==NULL){
        return false;
    }
    if(p->val == q->val){
       return (isSameTree(p->right,q->right) && isSameTree(p->left,q->left));
   }
 return false;
    
    

}
