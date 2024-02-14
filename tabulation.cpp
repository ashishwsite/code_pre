#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &num, int t)
{
    vector<int> dp(t + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= t; i++)// finding remaing valu 
    {
        for (int j = 0; j < num.size(); j++)// for each ith valu we have a for llop 

        {
            // cout<<"run ";
            if ((i - num[j]) >= 0 && dp[i - num[j]] != INT_MAX)// index not outside dp and dp valu not int MAx beaces we add 1 to it 
            { 
                // int ans=solve(num, t-num[i]);
                //mini=min(ans+1,mini);
                int ans=dp[i-num[j]];
                dp[i] = min(dp[i], 1 +ans);// 
                cout<<dp[i];
            }
        }
    }
    return dp[t];
}
int minimumElements(vector<int> &num, int x)
{
// cout<<"run ";
    int ans = solve(num, x);
    // cout<<"run ";
    if (ans == INT_MAX)
        return -1;
    return ans;
}
int main()
{
    vector<int> v = {1, 2};
    int ans = minimumElements(v, 3);
    cout<<"run ";
    cout << "this is final output" << ans;
    return 0;
}