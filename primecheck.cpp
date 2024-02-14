#include<bits/stdc++.h>
using namespace std;
int checkprime(int a){
    int cnt=0;
    if(a==1)
    return 0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        cnt++;
        if(cnt>=3)
        return 0;
    }
    return 1;
}
    int main(){
        int b;
        cin>>b;
        int ans=checkprime(b);
        cout<<ans;
    }