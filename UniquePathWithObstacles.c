int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize){
   if(obstacleGrid[0][0]==1)return 0;
    int sol[obstacleGridSize][*obstacleGridColSize];
    if(obstacleGrid[0][0]==0)sol[0][0]=1;
    else sol[0][0]=0;
    for(int i=1;i<obstacleGridSize;i++){
        if(obstacleGrid[i][0]==1)sol[i][0]=0;
        else
        sol[i][0]=sol[i-1][0];
    }
    for(int i=1;i<*obstacleGridColSize;i++){
        if(obstacleGrid[0][i]==1)sol[0][i]=0;
        else
        sol[0][i]=sol[0][i-1];
    }

    for(int i=1;i<obstacleGridSize;i++){
        for(int j=1;j<*obstacleGridColSize;j++){
            if(obstacleGrid[i][j]==1)sol[i][j]=0;
            else{
                sol[i][j]=sol[i-1][j]+sol[i][j-1];
            }
            
        }
        
    }
    
      
    return sol[obstacleGridSize-1][*obstacleGridColSize-1];

}
