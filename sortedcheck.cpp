#include<iostream>
#include<vector>
using namespace std;
bool checkesorted(vector<int > arr,int n){
if(n>=arr.size()){
return true;
}
if(arr[n]< arr[n-1]){
return false;
}
 return checkesorted(arr,n+1);

}
int main(){
    vector <int> arr={1,2,3,6,8,9,4, 71};
    int ans=checkesorted(arr,1);
    cout<<ans;
    if(ans==1){
    cout<<"sorted ";
    }
    else{
        cout<<"unsoretd ";
    }
   
}