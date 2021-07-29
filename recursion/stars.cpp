#include<iostream>

using namespace std;
void star(int n,int i,int j ){
    if(j<i){
    cout<<"* ";
    star(n,i,j+1);
    
 }else if(i<=n){
    cout<<endl;
    star(n,i+1,0);
 }
}

int main(){
       int a = 2;
       double b = 2.14;
       if(a<b){
          cout<<(int)b;
       }
      
}