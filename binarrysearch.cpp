#include<iostream>
#include<vector>
using namespace std;

// binarry search in array 
bool bisea (vector<int> arr,int k){
    int s=arr.size();
    int l=0;
    int e=s-1;
    while(l<e){
        if(k==(arr[l] || arr[e])){
          return true;
        }
        else
        l++;
        e--;
    }
    return false;

}

int main(){
    vector<int > arr={3,4,98,598,89};
    cout<<"enter a element to check its presence in array";
    int n;
    cin>>n;
    int ans=bisea(arr,n);
    cout<<ans;

}