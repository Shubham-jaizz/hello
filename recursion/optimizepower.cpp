#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int temp = power(a,b/2);
    if(b%2==0){
        return temp*temp;
    }else{
        return a*temp*temp;
    }
    
}
int main(){
   


    return 0;
}