#include <bits/stdc++.h>
using namespace std; 
int solve(vector<int> &num,int t,vector<int> &dp)
{
    int mini=INT_MAX;
    if(t==0) return 0;
    if(t<0) return  INT_MAX;
    if(dp[t]!=INT_MAX) return dp[t];
    for(int i=0;i<num.size();i++){
        int ans=solve(num, t-num[i],dp);
       if(ans!=INT_MAX ) {
        mini=min(ans+1,mini);// yaha par ans ko (mini)INT_MAX se compare kar rahe hai 
        dp[t]=mini;// recursin ke return case ko store kar raha hua(return mini;) 
        cout<<mini<<" ";
       }
    }
    return dp[t];
    // yaha par mini return hoga jo minimum ans hoga pichle vale function k liye
}
int minimumElements(vector<int> &num, int x)
{
 vector<int> dp(x+1,INT_MAX);
   int ans=solve(num,x,dp);
   if(ans==INT_MAX) return -1;
   return ans;
}
int main(){
    vector<int> v={2 ,1};
    int ans=minimumElements(v,11);
    cout<<"this is final output"<<ans;
    return 0;
}