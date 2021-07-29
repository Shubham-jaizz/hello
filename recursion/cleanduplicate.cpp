#include<iostream>
using namespace std;
// string duplicate(string s){
//     if(s.length()== 0){
//         return " ";
//     }
//     char first = s[0];
//     string ans = duplicate(s.substr(1));
//     if(first == ans[0]){
//         return ans;
//     }else{
//         return first+ans;
//     }
// }
string putback(string s){
    if(s.length() == 0){
         return "";
    }
    char first = s[0];
    string ans = putback(s.substr(1));
    if(first == 'x'){
        return ans+first;
    }else{
        return first+ans;
    }

}
string reverse(string s){
    if(s.length() == 0){
        return "";
    }
    char sum =  s[0];
    string ans =  reverse(s.substr(1));
    return ans+sum;
}
string replacepi(string s, string pi){
    if(s.length() == 0){
        return "";
    }
    char first = s[0];
    
    if(first == 'p'){
        if(s[1] == 'i'){
            string ans =replacepi(s.substr(2),"3.14");
            return pi+ans;
        }else{
            string ans = replacepi(s.substr(1),"3.14");
            return first+ans;
        }
    }else{ 
        string ans = replacepi(s.substr(1),"3.14");
        return first+ans;
    }
}
void substring(string s, string ans = " "){
    if (s.length()== 0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);

    
}

int main(){

substring("abc");
}