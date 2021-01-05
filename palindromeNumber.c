

bool isPalindrome(int x){
    if(x<0)return false;
    long temp=0;
    long n=x;
    while(n!=0){
        temp=(temp*10)+(n%10);
        n=n/10;
    }
    if(temp==x)return true;
    return false;

}
