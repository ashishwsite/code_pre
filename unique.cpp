#include<iostream>
#include<vector>
//programe to find unique element in array 
using namespace std;
int findunique(vector<int> arr){
int s= arr.size();
int cnt=0;
 for(int i=0;i<s;i++){
  int ele=arr[i];
  for(int j=i+1;j<s;j++){
    if(arr[j]==ele){
      break;
    }
  }
int main(){
    vector<int> arr={4,9,6,9,2,4,7,2};
    cout<<arr.size()<<endl;
    int e=findunique(arr );
    cout<<" the unique element is  "<<e;
}