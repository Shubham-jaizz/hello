# include <iostream>
# include <algorithm>
# include <string>
using namespace std;
int main(){
    string s = "ajksdksjskvs";
    string x = "NENKLWKCBSCSBCK";
    //  int x = 'a'-'A';
    //  cout<<x<<endl;    ans = 32
    // for(int i = 0; i< s.size();i++){
    //     if (s[i]>= 'a' && s[i]<= 'z'){
    //     s[i] = s[i] - 32;
    //     }
    // }
    for(int i = 0; i< x.size();i++){
        if (x[i]>='A' && x[i]<= 'Z'){
            x[i] += 32;
        }
    }
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
}