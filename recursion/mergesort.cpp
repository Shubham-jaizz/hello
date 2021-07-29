#include<iostream>
using namespace std;
void merge(int arr[],int lb,int mid,int ub){
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    int a[n1];
    int b[n2];
    for(int i = 0;i<n1;i++){
     a[i] = arr[lb+i];
    }
    for(int i= 0;i<n2;i++){
     b[i] = arr[mid+1+i];
    }
    int i =  0;
    int j =  0;
    int k =  lb;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
          arr[k] = a[i];
          k++;i++;
        }else{
            arr[k]= b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
        k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
}
 void mergesort(int arr[],int lb,int ub){
     if(lb<ub){
         int mid = (lb+ub)/2;
         mergesort(arr,lb,mid);
         mergesort(arr,mid+1,ub);
         merge(arr,lb,mid,ub);
     }
 }
int main(){
 int arr[] = {5,4,8,1,7};
 mergesort(arr,0,4);
 for(int i = 0;i<5;i++){
     cout<<arr[i]<<" ";
 }
}