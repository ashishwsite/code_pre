#include<iostream>
#include<vector>
using namespace std;
void printarr(int arr[], int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"->";
    }
    cout<<endl;
}
void rotate(int arr[],int s, int k){
   int id=s-1;
   int l=id;
   int mid=id-k;
   vector<int> tem;
   while (l>mid){
    tem.push_back(arr[l]);
    l--;

   }
   while (mid>=0)
   {
   arr[id]=tem[mid];
   id--;
   mid--;
   }
   int i=0;
   while (i<k)
   {
    arr[i]=tem[k-1];
    i++;
    k--;

   }
   
   


}
int main(){
    int arr[]={5,6,9,2,3,7};
    int s=6;
    int k=2;
    rotate(arr,s,k);
    cout<<"  "<< endl;
    printarr(arr,6);


}

