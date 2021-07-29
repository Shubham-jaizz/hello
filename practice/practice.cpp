#include "bits/stdc++.h"
using namespace std;

int main(){
double s[] = {1.1,2.2,3.4,1.1};
double* dp = (s+3);
for(int i = 0;i<4;i++){
    cout<<*(dp-i)<<endl;
}
} 