#include "bits/stdc++.h"
using namespace std;
vector<vector<int>>ans;
 void permu(vector<int>&a,int idx){
     
      if(idx == a.size()){
          ans.push_back(a);
          return;
      }
      for(int i = idx;i<a.size();i++){
          if(i!= idx && a[idx]==a[i]){
          swap(a[i],a[idx]);
          permu(a,idx+1);
          swap(a[i],a[idx]);
          continue;
          }
      }
      return;
  }
int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    } 
    permu(a,0);
    for(auto v:ans){
        for(auto i:v){
           cout<<i<<" ";
        }
        cout<<endl;
    }
}