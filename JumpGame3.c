bool search(int *arr,int arrSize,int start,bool* visited){
    if(visited[start]==true)return false;
    visited[start]=true;
    if(arr[start]==0)return true;
    bool b1=false,b2=false;
    if(start+arr[start]<arrSize){
        b1=search(arr,arrSize,start+arr[start],visited);
    }
    if(start-arr[start]>=0){
        b2=search(arr,arrSize,start-arr[start],visited);
    }
    return b1||b2;
}

bool canReach(int* arr, int arrSize, int start){
    if(start>arrSize-1 || start<0)return false;
    if(arr[start]==0)return true;
   bool visited[99999]={false};
    return search(arr,arrSize,start,visited);

}
