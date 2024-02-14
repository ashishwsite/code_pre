#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ans=0;
while(t--){
    int f;
    int s;
    int t;
    cin>>f>>s>>t;
    int sum=f+s+t;
    if(sum>=2){
        ans++;
    }
 }
 cout<<ans<<endl;
return 0 ;
}