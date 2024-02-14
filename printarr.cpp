#include<iostream>
// print element in array 
using namespace std;
void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int element (int arr[],int k, int n){
    for(int i=0; i<n;i++){
        if(arr[i]==k)
        return i;
      
    }
      return -1;
}
int main(){
    int arr[]={5,9,3,8,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<"printing elemnent in the arr "<<endl;
    // printArray(arr ,n);
    cout<<"finding the element in the given array  "<< endl;
    int ei=element( arr, 8,n);
    cout<<"the element fount at indeex is"<<ei<<endl;



}