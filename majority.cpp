#include <iostream> 
// this programe is usefull to find the majority element in the given array 
//WHAT IS MAJORITY ELEMENT ?? a element which occur more than N/2 TIME IN the particular array 
using namespace std;
int majority(int arr[],int n){
    int r=n/2;
   // int cnt=0;
    for(int i=0;i<n;i++){
        int e=arr[i];
        int cnt=0;
        for(int j=0;j<n;j++){
            if(e==arr[j]){
cnt++;
if(cnt>r){
    return e;
}
            }
        }
    }
    return 0;
}
int main(){
    int arr[]={3,3,3,2,4,3,2,3,4};
    int m=majority(arr,9);
    if(m==0){
        cout<<"no majority element found in the given array"<<endl;
    }
    else{
        cout<<"majority element is found "<<m;
    }
}
