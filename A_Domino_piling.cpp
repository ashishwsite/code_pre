#include<bits/stdc++.h>
using namespace std;
int main(){
int l;
int b;
cin>>l>>b;
int ans=0;
ans=ans+(l/2)*b;
if(l%2!=0) 
ans=ans+b/2;
cout<<ans;
}