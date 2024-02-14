#include<bits/stdc++.h>
using namespace std;
#define m 1000000007
int solve(int n,int r){
    if(r==0) return 1;
    if(r==1) return n;
    if(r==1) return 1;
    if(r==0) return 0;
    return((n%m)*(solve(n,r-1)%m)%m);
}
int main(){
    int n=57;
    int r=75;
    int ans=(solve(n,r));
    cout<<ans;
}