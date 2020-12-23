#define MAX 2000

int kthFactor(int n, int k){
    if(n==1)return 1;
    int fact[MAX],t=0,i;
int new=n;
    for(i=1;i<=n;i++){
        if(new%i==0){
            fact[t++]=i;
        }
    }
    if(k>t)return -1;
    return fact[k-1];

}
