#include<bits/stdc++.h>
using namespace std;
int fac(int n){
    if(n<2)
    return 1;
    else
    return n*fac(n-1);
}
int main(){
    int n;
    cin>>n;
    int ans= fac(n);
    cout<<ans;
}