#include<iostream> 
using namespace std;
// isertion in the 
//given array
int inend(int arr[],int n,int capicity,int key){
    if(capicity<=n){
cout<<"isertion not possilbe"<<endl;
return -1;}
    arr[n]=key;
    return n+1;
}
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[56]={5,9,3,7,12,036,9420};
;

    int capicity =56;
    // cout<<"intially array element is "<<endl;
    // printarr(arr, size);
    int index= inend(arr,7,56,73665);
    cout<<"indedx after insertin"<<endl;
 cout<<index;



}