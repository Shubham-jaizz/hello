 #include <iostream>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int e = 0;e<n;e++){
         cin>>arr[e];
     }
     for(int i = 1; i<n;i++){
         int current =arr[i];
         int j = i-1;
         while (arr[j]> current )
         {
           arr[j+1] =arr[j];
           arr[j] = current
           j--;
         }
         
     }
     for (int k = 0; k < n; k++)
     {
         cout<<arr[k]<<" ";
     }
     
    return 0;
    
    
 }

