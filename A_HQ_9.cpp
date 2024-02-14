#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
int i=0;
for( i=0;i<n;i++){
    if(s[i]=='Q'|| s[i]=='H' || s[i]=='9'){
        cout<<"YES"<<endl;
        break;
    }
}
if(i>=n)cout<<"NO";
}