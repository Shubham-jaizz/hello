#include<iostream>
using namespace std;
int countpath(int s,int e){
    if(s == e){
        return 1;
    }
    if(s>e){
        return 0;
    }

    int count = 0;
    for(int i = 1;i<=6;i++){
        count += countpath(s+i,e);
    }
    return count;
}
int mazeproblem(int n,int i,int j){
    if(i==n && j == n){
        return 1;
    }if(i>n || j>n){
        return 0;
    }
    return mazeproblem(n,i+1,j)+mazeproblem(n,i,j+1);
}
int main(){
cout<<mazeproblem(3,1,1);
}
