#include <iostream>
using namespace std;
int fib(int n,int a,int b){
    if(n == 0){
        return a;
    }if(n == 1){
        return b;
    }
    if(n == 2){
        return a^b;
    }
      return fib(n-1,a,b)^fib(n-2,a,b);
}

int main() {
   int t;
   cin>>t;
   
       int long a,b,n;
       cin>>a>>b>>n;
       cout<<fib(n,a,b)<<endl;
       
    return 0;
	
}
