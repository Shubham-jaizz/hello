
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    if(N <= 200){
    for(int i = 0;i< N;i++){
        if(i%2 == 0 ){
            for(int j = 5*i+1;j <=5*i+5; j++){
                cout<<j<<" ";
            }
        }else{
                for(int k = 5*i+5; k>5*i;k--){
                    cout<<k<<" ";
                }
            }
            cout<<" "<<endl;
            end
        }
    }
	return 0;
}
