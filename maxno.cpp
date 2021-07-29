# include <iostream>
# include <algorithm>
# include <string>
using namespace std;
int main(){
    string s = "539653659365";
    //first method
    
    // int arr[s.length()];

    // for(int i = 0;i<s.length();i++){
    //      arr[i] = s[i];
    // }
    // int counter = 1;
    //  while(counter< s.size()){
    //      for(int j = 0;j< s.size()-counter; j++){
    //         if(arr[j]<arr[j+1]){
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
    //      }
    //       counter++;
    //  }
    //  for(int i = 0;i<s.length();i++){
    //      s[i] = arr[i];
    // }
    // cout<<s;
    //2nd method
    sort(s.begin(),s.end(),greater<int>());
    cout<< s<<endl;
    return 0;

    
}