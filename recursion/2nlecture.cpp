# include <iostream>
using namespace std;
void replacepi(string s){
    if(s.size() == 0){
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
void reverse(string s){
    if(s.size() == 0){
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int lastocc(int arr[],int n,int i,int key){
    if(i == n){
        return -1;
    }
    int restarr = lastocc(arr,n,i+1,key);
    if(restarr != -1){
        return restarr;
    }
    if(arr[i] == key){
        return i;
    }else{
        return -1;
    }
}
int firstocc(int arr[],int n,int i,int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
         cout<<i<<endl;
         return i;
    }else{
         firstocc(arr,n,i+1,key);
    }
}

// bool sort(int arr[],int n){
//     if(n==1){
//         return true
//     }
//     bool restarr =  sort(arr+1,n-1);
//      return (arr[0]<arr[1] && restarr);
//  }
int main(){
   string s = "pippppiiiipi";
   replacepi(s);
  return 0;
}