

int uniquePaths(int m, int n){
    int sol[m][n];
    sol[0][0]=0;
    for(int i=0;i<m;i++){
        sol[i][0]=1;
    }
    for(int j=0;j<n;j++){
        sol[0][j]=1;
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            sol[i][j]=sol[i-1][j]+sol[i][j-1];
        }
    }
    return sol[m-1][n-1];
}
