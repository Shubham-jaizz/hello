#include<iostream>
using namespace std;
int main(){
    int col,row;
    cin>>col>>row;
    for(int i=1; i<= row; i++){
        for (int j = 1; j <= col-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
      return 0;  
        
    }