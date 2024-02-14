#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a=0;
while(t--){
    string st;
    cin>>st;
    char f=st[1];
    if(f=='+'){
     a++;
    }
    else{
        a--;
    }
 }
cout<<a<<endl;
}