#include <iostream>
 using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    bool check = 1;
    for(int i = 0;i<n;i++){
        if (arr[i] != arr[n-1-i]){
            check = 0;
        }
    }
    if(check == 1){
        cout<<"word is a palindrome";
    }else{
        cout<<"word is not palindrome"; 
    }
return 0;
}