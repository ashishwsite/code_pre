#include<iostream>
using namespace std;
// bubble shot
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
} 
void bubbleshot(int arr[],int n){
    int j=0;
    while(j<n){
      //  printarr(arr,n);
        for(int i=0 ;i<n-1-j;i++){
            // cout<<"12"<<endl;
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
       // printarr(arr,n);
        cout<<endl;


        }
    
    j++;
    };
}
int main(){
    int arr[]={5,1,4,2,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleshot(arr,n);
    printarr(arr,n);

}
