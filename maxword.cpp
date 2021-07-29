#include <iostream>
#include <climits>
 using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    int count =0;
    int maximum = 0;
    int st = 0;
    int maxst =0;
    while(1){
        if(arr[i] == ' '||arr[i]=='\0'){
            if(count>maximum){
                maximum = count;
                maxst = st;
            }
            count = 0;
            st  = i+1;
        }else
        count++;
        
        if(arr[i]=='\0')
            break;
        
        i++;
    }

    
       cout<<maximum<<endl;
       for(int i =0;i<maximum;i++){
           cout<<arr[maxst+i];
       }
       return 0;
}


    