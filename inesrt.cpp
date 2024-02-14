// insert in arr at any point or index
#include <iostream>
using namespace std;
void printA(int arr[],int s){
    for(int i=0; i<s;i++){
        cout<<arr[i]<<endl;
    }
}
// int binayS(int arr[],int s){
//     int i=0;
//     int j=s-1;
//     int mid=(i+j)/2;
// THIS USED WHEN SORTED ARRAY IS GIVEN
int binayS(int arr[],int s,int k){
    for(int i=0;i<s;i++){
        if(arr[i]==k)
        return i;
    }
    return 0;
}
int   insert(int arr[],int s,int e,int k){
    int p=binayS(arr, s,e);
    if(p==-1)
    return 0;
    for(int i=s-1;i>=p;i--){
        arr[i+1]=arr[i];
        
    }
    arr[p]=k;
    return s+1;
}
int main(){
    int arr[]={5,9,38,6,36};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"intially the element of arr"<<endl;
    printA(arr,size);
    int I=insert(arr, size,38,86);
    size=I;
    cout<<I;
    cout <<" element after the insertion"<<endl;
    printA(arr,size);

}