#include<bits/stdc++.h>
using namespace std;
bool solve(int *arr,int i,int n){
  if(i>=n){
    return 1;
  }
  if(arr[i]>=arr[i-1]){
    return solve(arr,i+1,n);
  }
  return 0;
}
bool issorted(int *arr,int n){
    if(n<=1) return 1;
    int i=1;
    return solve(arr,i,n);
}
bool ispresent(int i,int n,int k,int arr[]){
    if(i>=n) return 0;
    if(arr[i]==k){
        return 1;
    }
    return ispresent(i+1,n,k,arr);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int i=0;
    int n=5;
    int k=2;
//  bool ans=issorted(arr,5);
//  cout<<ans;
bool present=ispresent(i,n,k,arr);
cout<<present;
}