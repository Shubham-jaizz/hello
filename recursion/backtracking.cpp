#include<iostream>
using namespace std;
bool issafe(int**arr,int x,int y,int n){
    if(arr[x][y] == 1 && x<n && y<n){
        return true;
    }
    return false;
}
bool mazerun(int**arr,int x,int y,int n,int**sol){
    if((x==(n-1)) && (y == (n-1))){
        sol[x][y] = 1;
        return true;
    }
    if(issafe(arr,x,y,n)){
        sol[x][y] = 1;
        if(mazerun(arr,x+1,y,n,sol)){
            return true;
        }
        if(mazerun(arr,x,y+1,n,sol)){
            return true;
        }
        arr[x][y] = 0;
        return false;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int**arr = new int*[n];
    for(int i =0;i<n;i++){
        arr[i] = new int[n];
    }
      for(int i =0;i<n;i++){
           for(int j =0;j<n;j++){
               cin>>arr[i][j];
           }
      }
      int** sol = new int*[n];
       for(int i =0;i<n;i++){
        sol[i] = new int[n];
    }
    for(int i =0;i<n;i++){
           for(int j =0;j<n;j++){
              sol[i][j] = 0;
           }
      }
      cout<<endl;
      if(mazerun(arr,0,0,n,sol)){
          for(int i =0;i<n;i++){
           for(int j =0;j<n;j++){
               cout<<sol[i][j]<<" ";
           }
           cout<<endl;

      }
      }
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

}