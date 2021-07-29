#include <iostream>
using namespace std;
bool issafe(int**a,int x, int y, int n ){
 
 for(int i = 0;i<x;i++){
     if(a[i][y]== 1){
         return false;
     }
 }
 int row = x;
 int col = y;
 while(col>=0 && row >= 0){
 if(a[row][col] == 1){
     return false;
 }
 col--;
 row--;
}

row = x;
col = y;
 while(col<=n && row >= 0){
 if(a[row][col] == 1){
     return false;
 }
 
 col++;
 row--;
 }
return true;
 }
bool nqueen(int** a,int x,int n ){
    if(x >= n){
        return true;
    }
    for(int i = 0;i<n;i++){
        if(issafe(a,x,i,n)){
            a[x][i] = 1;
            if(nqueen(a,x+1,n)){
                return true;
            }
            a[x][i]= 0;
        }
    }
    return false;

}


int main(){
    int n;
    cin>>n;
    int**a =  new int*[n];
    for(int i = 0;i<n;i++){
         a[i] = new int [n];
        for(int j = 0;j<n;j++){
             a[i][j] = 0;
        }
    }
    if(nqueen(a,0,n)){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
             cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    }
    return 0;
}