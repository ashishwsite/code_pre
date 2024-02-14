#include<iostream> 
using namespace std;
// as we are geting sum using two pointer method so 
// mantotary to sort fisrt
int pairsum(int arr[],int s,int n){
    int i=0;
    int j=n-1;
    while (i<j)
    {
        if(arr[i]+arr[j]==s)
        return 1;
        else if (arr[i]+arr[j]>s)
        j--;
        else
        i++;
    
    }
    return 0;
    
}
int main(){
    int arr[]={10,10,30,15,50,75,80};
    int n=sizeof(arr)/sizeof(arr[0]);
  //  int s=70;
  int s=85;
    int ans=pairsum(arr, s,n);
    if(ans==1){
        cout<<" the pair sum is found"<<endl;
    }
    else
    cout<<"pair sum not found";
}