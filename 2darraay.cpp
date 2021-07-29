 #include <iostream>
 using namespace std;
 int main(){
     int n,m;
     cin>>n>>m;
     int arr[n][m];
     for(int i=0;i<n;i++){
         for(int j = 0;j<m;j++){
             cin>>arr[i][j];
         }
     }
     cout<<"matrix is"<<endl;
      for(int i=0;i<n;i++){
         for(int j =0;j<m;j++){
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
     }
     int x;
     cin>>x;
     int y[2];
     bool flag = false;
     for(int i=0;i<n;i++){
         for(int j =0;j<m;j++){
             if(arr[i][j] == x){
             flag = true;
             y[0]=i;
             y[1]=j;
             }
         }
         
     }
     if(flag){
         cout<<"element is found"<<" "<<y[0]<<" "<<y[1];
     }else{
         cout<<"element is not found";
     }
   return 0;
 }
