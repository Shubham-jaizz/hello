#include <iostream>
#include<climits>
using namespace std;
int noofpairs(int arr[],int n){
    int count = 0;
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]^arr[j])>max(arr[i],arr[j])){
                count++;
            }
        }
    }
    return count;
}

int main() {
	int t;
	cin>>t;
	for(int i= 0; i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<noofpairs(arr,n)<<endl;
	}
	return 0;
}