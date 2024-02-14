#include<bits/stdc++.h>
using namespace std;
int main(){
int pat;
int score;
cin>>pat>>score;
int pos=score;
int cnt=0;
int pre=-1;
for(int i=1;i<=pat;i++){
    int ele;
    cin>>ele;
    // cout<<ele<<" "<<pos<<endl;
    if(pos>0 && ele!=0){
        if(pos==1){
            pre=ele;
        }
            cnt++;
            pos--;
     }
    else if(pos<=0 && ele==pre){
        cnt++;
    }
    else
    break;
}
cout<<cnt;
return 0;
}