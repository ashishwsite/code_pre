#include<bits/stdc++.h>
using namespace std;
int main(){
string seq;
cin>>seq;
int n=seq.length();
int z=0;
int f=0;
for(int i=0;i<n;i++){
    if(seq[i]=='0'){
        f=0;
        z++;
        if(z>=7){
            // cout<<"YES"<<endl;
            break;
        }
    }
    else {
        z=0;
        f++;
        if(f>=7){
            // cout<<"YES"<<endl;
            break;
        }
}
}
if(f>=7 || z>=7) cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}