#include<iostream>
using namespace std;
// in this programe we are sorting of given element in the array 
// SELECTION  SHOT

void printarr(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<endl;
    }
     
}
// //void swap(int &f,int &s){
//     int  t;
//     t=f;
//     f=s;
//     s=t;
// }//
void sortarr(int arr[],int n){
    for(int i=0;i<n;i++){
        
       // cout<<"13"<<endl;
        
         printarr(arr, n);
        // cout<<endl;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            //cout<<e<<"-";
            }
    
            
        }
    }
}
int main(){
    int arr[]={5,2,1,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"element before sorting "<<endl;
    printarr(arr, n);
    sortarr(arr,n);
     cout<<"element after sorting "<<endl;
     printarr(arr, n);


}