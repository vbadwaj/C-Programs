
bool isSubsequence(char * s, char * t){
    int i,j,count=0;
    while (s[i]!=NULL && t[j]!=NULL){
        if(s[i]==t[j]){
            i++;
            count++;
            
        }
        j++;
    }
    if(count==strlen(s))return true;
    else return false;
}
