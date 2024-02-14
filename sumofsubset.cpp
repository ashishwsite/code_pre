#include<bits/stdc++.h>
using namespace std;
 vector<int> solve(vector<int> &arr,vector<int> &set,vector<int> &ans,int i,int &n){
       if(i==n){
           return ans;
       }
       // exclude call 
       int s=0;
       for(auto i:set){
           s=s+i;
       }
       ans.push_back(s);
       for(auto j: ans){
        cout<<j;
    }
    cout<<"f";
      ans= solve(arr,set,ans,i+1,n);
       // include call
       int t=0;
       set.push_back(arr[i]);
       for(auto i:set){
           t=t+i;
       }
       cout<<endl;
       ans.push_back(t);
       ans=solve(arr,set,ans,i+1,n);
       return ans;
       
   }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        vector<int> set;
        int i=0;
        int n=N;
        return solve(arr,set,ans,i,n);
        
    }
int main(){
    vector<int> arr={2,3};
    int n=arr.size();
    vector<int> ans=subsetSums(arr,n);
    cout<<"ans print ";
    for(auto i: ans){
        cout<<i;
    }
}