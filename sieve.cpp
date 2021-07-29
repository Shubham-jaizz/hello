#include <iostream>
using namespace std;
void prime(int n){
    int arr[100] = {0};
    for(int i  =2;i<=n;i++){
        if(arr[i] == 0){
            for(int j =2*i;j<=n;j+=i){
                arr[j] = 1;
            }
        }
    }
    if(arr[n] != 1){
        cout<<"prime"<<" ";
    }else{
        cout<<"not a prime";
    }
}
void spfof(int n){
       int spf[100];
       
       for(int i = 2;i<=n;i++){
           spf[i] = i;
       }
    for(int i =2;i<=n;i++){
        if(spf[i] == i){
            for(int j =i*i;j<=n;j+=i){
                spf[j] = i;
            }
        }
    }
    cout<<spf[n]<<" ";
    while(n != 1){
        n = n/spf[n];
        cout<<spf[n]<<" ";
    }
    
}
int main(){
    // prime(45);
    spfof(16);

}