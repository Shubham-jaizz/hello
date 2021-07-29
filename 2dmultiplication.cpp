#include <iostream>
 using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     int a[n][m];
     int b[m][n];
     int c[n][n];
     for(int i=0;i<n;i++){
         for(int j = 0;j<m;j++){
             cin>>a[i][j];
         }
     }
       for(int i=0;i<m;i++){
         for(int j = 0;j<n;j++){
             cin>>b[i][j];
         }
     }
       for(int i=0;i<n;i++){
         for(int j = 0;j<n;j++){
             c[i][j] = ;
         }
     }
     for(int i = 0;i<n;i++){
         for(int j =0;j<n;j++){
             for(int k =0;k<m;k++){
                 c[i][j] += a[i][k]*b[k][j];
             }
         }
         
     }
     for (int i=0;i<n;i++){
         for(int j = 0;j<n;j++){
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
     }
         return 0;
}