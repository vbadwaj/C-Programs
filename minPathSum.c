int min(int a,int b){
    if(a>b)return b;
    return a;
}

int minPathSum(int** grid, int gridSize, int* gridColSize){
    if(gridSize==0 || *gridColSize==0)return 0;
    int sol[gridSize+1][*gridColSize+1];
    sol[0][0]=grid[0][0];
    int i,j;
    for(i=1;i<gridSize;i++){
        sol[i][0]=sol[i-1][0]+grid[i][0];
    }
      for(i=1;i<(*gridColSize);i++){
        sol[0][i]=sol[0][i-1]+grid[0][i];
    }
    for(i=1;i<gridSize;i++){
        for(j=1;j<(*gridColSize);j++){
            sol[i][j]=grid[i][j]+min(sol[i-1][j],sol[i][j-1]);
        }
    }
        
    return sol[gridSize-1][*(gridColSize)-1];
    

}
