#include<iostream>
using namespace std;
//programe to finding the reapting element in the arr
int reapting(int arr[],int n){
    for(int i=0;i<n;i++){
        int e=arr[i];
        for(int j=i+1;j<n;j++){
            if(e==arr[j])
            return e;
        }
    }
    return 0;

}

int main(){
    int arr[]={1,3,4,2,4};
    int R=reapting( arr, 5);
    if(R==0)
    cout<<"not reapting elementa found"<<endl;
    else{
    cout<<"reapting element is"<<R;
    }
}