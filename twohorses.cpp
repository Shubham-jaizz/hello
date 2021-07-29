#include<iostream>
#include<climits>
int main() {
	int t;
	cin>>t;
	for(int i = 0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n];
         for(int e = 0;e<n;e++){
             cin>>arr[e];
         }
         int counter = 1;
         while(counter< n){
           for(int j = 0;j< n-counter; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
             }
           }
          counter++;
        }
	 
     int mindiff = INT_MAX;
     int diff = 0;
     for(int k = 0;k<n-1;k++){
         diff = arr[k+1]-arr[k];
         mindiff = min(mindiff,diff);
     }
     cout<<mindiff<<" "<<endl;

	} 
	
	return 0;
}
