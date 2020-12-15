int max(int a,int b){
    if(a>b)return a;
    else return b;
}

int longestCommonSubsequence(char * text1, char * text2){
    int i,j;
    int s1=strlen(text1);
    int s2=strlen(text2);
   
    int LCS[s1+1][s2+1];
       
    for(i=0;i<=s1;i++){
        for(j=0;j<=s2;j++){
            if(i==0 || j==0){
                LCS[i][j]=0;
            }
            else if(text1[i-1]==text2[j-1]){
                LCS[i][j]=LCS[i-1][j-1]+1;
            }
            else{ 
                LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
            }
            
        }
    }
    
    return LCS[s1][s2];

}
