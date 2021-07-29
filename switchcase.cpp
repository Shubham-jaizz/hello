#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"write a letter";
    cin>>button;
    // if(button== 'a'){
    //     cout<<"hello";
    // }
    // else if(button == 'b'){
    //     cout<<"ciao";
    // }
    // else if(button=='c'){
    //     cout<<"iam still leanring";
    // }
    // else if(button=='d'){
    //     cout<<"still coding";
    // }
    // else(button=='e'){
    //     cout<<"try to learn the things";
    // }
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
     case 'b':
        cout<<"ciao"<<endl;
        break;
     case 'c':
        cout<<"iam still learning"<<endl;
        break;
     case 'd':
        cout<<"still coding"<<endl;
         break;
     case 'e':
        cout<<"try to learn the things"<<endl;
         break;
     case 'f':
        cout<<"resume building"<<endl;
        break;
    
    default:
    cout<<"iam still leaarning";
        break;
    }
}