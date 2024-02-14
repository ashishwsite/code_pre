#include<bits/stdc++.h>
using namespace std;
  int solve(int l,vector<int> seg,int ans){
     if(l==0){
        return  0;
     }
     if(l<0) return -1;
     for(int i=0;i<3;i++){
        {
            int re=solve(l-seg[i],seg,ans);
            ans= max(ans,re);
        } 
     }
     return ans;
     cout<<ans<<endl;
}
int main(){
    int rl=7;
    vector<int> seg={2,2,5};
    int ans=0;
 int re=solve(rl,seg,ans);
  cout<<re;
}