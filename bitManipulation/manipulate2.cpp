#include<iostream>
using namespace std;
bool getbit(int n,int pos){
    return (n & (1<<pos) != 0);
}
int setbit(int n,int pos){
    return (n|(1<<pos));
}
bool powerof2(int n){
    return (n && !(n&(n-1)));
}
int noofones(int n){
     int count = 0;
     while(n != 0){
         n = n & (n-1);
         count++;
     }
     return count;
}


void subsets(int arr[],int n){
    for(int i = 0;i<(1<<n);i++){
        for(int j =0;j<n;j++){
            if(i &(1<<j)){
                cout<<arr[j]<<" ";
              }
            }
            cout<<endl;
        }
    }
    void uniquetwono(int arr[],int n){
        int xorsum = 0;
        for(int i =0;i<n;i++){
            xorsum = xorsum^arr[i];
        }
        int temp = xorsum;
        int j =0;
        while((xorsum & (1<<j)) == 0){
            j++;
        }
        for(int i =0;i<n;i++){
            if((arr[i] &(1<<j))!=0){
                xorsum = xorsum^arr[i];
            }
        }
        cout<<xorsum<<" "<<(xorsum^temp);
    }
   int uniquetriple(int arr[],int n){
        int result  = 0;
        for(int i =0;i<64;i++){
            int sum  =0;
            for(int j = 0;j< n;j++){
                if(getbit(arr[j],i)){
                    sum++;
                }
            }
            if(sum%3 != 0){
               result = setbit(result,i);
            }
        }
        return result;
    }


int main(){
    // cout<<powerof2(14);
    // cout<<noofones(19);
    int arr[4] = {1,2,3,4};
    subsets(arr,4);
//    int arr[10] = {2,3,2,3,2,3,1};
//    cout<<uniquetriple(arr,10);

}