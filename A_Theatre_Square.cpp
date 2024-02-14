#include<bits/stdc++.h>
using namespace std;
int main(){
long long l;
long long b;
long long a;
long long lw=0;
long long bw=0;
cin>>l>>b>>a;
lw=l/a;
bw=b/a;
if(l%a!=0) lw++;
if(b%a!=0) bw++;
cout<<lw*bw;
return 0 ;
}
