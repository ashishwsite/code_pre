#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n=t;
int s=0;
vector<int> v(t);
while(t--){
    cin>>v[t];
    s=s+v[t];
 }
 int profit=s/2+1;
//  if(s%2==1) profit++;
 sort(v.begin(),v.end());
 reverse(v.begin(),v.end());
 int c=0;
 int ans=0;
 for(int i=0;i<n;i++){
    if(ans>=profit) {
        break;
    }
    ans=ans+v[i];
    c++;
 }
 cout<<c<<endl;
return 0 ;
}