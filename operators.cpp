#include<iostream>
using namespace std;
int main(){
    int i= 1;
//     int j = 2;
     int k;
//     // 1  //2  //1   //2   //3    //4
//    k = i + j + i++ + j++ + ++i + ++j;
//     cout<<i<<" "<<j<<" "<<k<<endl;
     //  1      1     2     2
     k = i++ - --i + ++i - i--;
     cout<<i<<"  "<<k<<endl;
    return 0;
}