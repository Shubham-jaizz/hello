#include<iostream>
using namespace std;
int fib(int n){
    if(n==0 || n==1){
        return n;
    } 
    return fib(n-1) + fib(n-2); 
}
int factorial(int n){
    if(n == 0){
        return 1;
    }
    int prevfacto = factorial(n-1);
    return n*prevfacto;
}
int power(int n, int z){
    if(z !=0){
        int previous = z-1;
        return n*power(n,previous);
    }else{
        return 1;
    }
    
}
int main(){
      cout<<fib(1);
}