#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n ; i++)
    {
       cin>>arr[i];
    }
    int a = INT_MIN;
    int b = INT_MAX;
    for(int j =0; j< n; j++){
        if(arr[j]>a){
            a = arr[j];
        }
        if(arr[j]<b){
            b = arr[j];
        }
        
    }  
    cout<<a<<"max"<<b<<"min";
    return 0;  
}