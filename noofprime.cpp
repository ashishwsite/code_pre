#include <bits/stdc++.h>
#include<vector> 
using namespace  std;


vector < int > findAllPrimes(int n) 
{
    // Write your code here.
    vector <int> temp;
    if (n < 2) {
      temp.push_back(0);
      return temp;
    }
    if(n==2 ){
     temp.push_back(2);
     return temp;
    }
    int j=2;
    while(j<=n){
        int cnt=0;
        for(int i=3;i<j;j++){
            if(j%i==0)
            break;
            else 
            cnt++;
        }
        if (cnt == j -2) {
          temp.push_back(j);
          j++;
        }
    }
    return temp;
}
int main(){
    int n=3;
    vector<int > arr;
    arr=findAllPrimes(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}