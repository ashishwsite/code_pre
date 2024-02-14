#include<iostream>
using namespace std;
  int mySqrt(int x) {
        if(x==0)
        return 0;
        if(x==1)
        return 1;
        for(int i=0;i<x;i++){
            int ans=i*i;
            if(ans==x)
            return i;
            if(ans>x)
            return (i-1);
        }
    }
    int main(){
        int z;
        cin>>z;
        int ans=mySqrt(z);
        cout<<ans;
    }