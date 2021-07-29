                
#include<iostream>
#include<climits>
using namespace std;
int kadanes( int arr[],int n){
    int currsum = 0;
   int maxsum=INT_MIN;
      for(int i = 0; i<n;i++){
          currsum += arr[i];
          if(currsum <0){
              currsum = 0;
          } 
          maxsum = max(maxsum, currsum);
       } 
       return maxsum;
} 
int main(){
    int n;
    cin>>n;
    int arr[n];
    
   for(int i = 0 ; i<n; i++){
       cin>>arr[i];
   }
    int wrapsum;
    int nowrapsum;
    nowrapsum = kadanes(arr,n);
    int totalsum = 0;
    for(int i = 0 ; i< n; i++){
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    int noncounting = kadanes(arr,n);
    wrapsum  = totalsum + noncounting;
    int maxSum = max(wrapsum  , nowrapsum);
    cout<<maxSum<<endl;
   return 0;
}
