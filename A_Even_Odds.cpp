#include<bits/stdc++.h>
using namespace std;
int main(){
long long int  n;
long long int k;
cin>>n>>k;
long long int  odd=n/2;
if(n%2==1) odd++;
if(k<=odd){
    long long int ans=2*k-1;
    cout<<ans<<endl;
}
else{
    long long ans=2*(k-odd);
    cout<<ans<<endl;
}
}