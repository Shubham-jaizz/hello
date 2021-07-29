#include <iostream>
 using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     int a[n][m];
     int target;
     cin>>target;
      for(int i=0;i<n;i++){
         for(int j = 0;j<m;j++){
             cin>>a[i][j];
         }
     }
      int c = 0,d =m-1;
      bool t = false; 
     while(c< n && d>=0){
         if(a[c][d] == target){
          t = true;
          
          
          break;
         }else if(a[c][d]> target){
             d--;
         }else{
             c++;
         }
     }
     if(t == true ){
         cout<<"yes"<<c<<" "<<d;
     }else{
         cout<<"NO";
     }

     return 0;
 }