#include<iostream>
using namespace std;
int main(){
    
    int n;
    int k;
    cin>>n;
    cin>>k;
    for(int i= 1; i<=n; i++){
        for (int j = 0; j < k ; j++)
        {
            if(i==1||i==n||j==0||j==k-1){
            cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<" "<<endl;
    }
    return 0;
}