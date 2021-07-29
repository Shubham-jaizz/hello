#include<iostream>
#include <string>
using namespace std;
void numbers(int n,int i,string ans){
    if(i == n){
        cout<<ans<<endl;
        return;
    }
    
    
    if(ans[i]=='0'||ans[i]==' '){
        numbers(n,i+1,ans+'0');
        numbers(n,i+1, ans+'1');
    }
    if(ans[i]=='1'){
        numbers(n,i+1,ans+'0');
    }
}
int main(){
    
    numbers(5,0," ");
  return 0;
}