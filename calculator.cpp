#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cout<<"enter two numbers";
    cin>>n1>>n2;

    char op;
    cout<<"enter the operation";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
     case '-':
        cout<<n1-n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    default:
        cout<<"enter another operation";
        break;
    }
    return 0;
}
