// CONVERTATION FROM NUMBEER TO WORD
#include <bits/stdc++.h>
using namespace std;
vector<string> v = {" ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void solve(int n)
{
    if (n == 0)
        return;
    int r = n % 10;
    n = n / 10;
    solve(n);
    // cout << v[r] << " ";
}
void solve(string s, vector<string> &dp)
{
    map<int, int> m;
    for(int i=1;i<=9;i++){
        m[i]=0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        int num = int(s[i]) - 48;
        m[num]++;
    }
    // for(auto val:m){
    //     cout<<val.second<<" ->"<<val.first<<endl;
    // }
    vector<string> ans;
    for (int j = 1; j <= 9; j++)
         {
        if (m[j] != 0)
        {
            // cout << m[j];
            // making charcter
            string f=to_string(m[j]);
            string s=to_string(j);
            ans.push_back(f);
            ans.push_back(s);
        }
}
// for (auto val : ans)
// {
//     cout << val << " ";
// }
dp.push_back(ans);
}
string countAndSay(int n)
{
    vector<string> dp;
    dp.push_back("0");
    dp.push_back("1");
    for (int i = 2; i <= n; i++)
    {
        solve(dp[i - 1], dp);
    }
    return dp[n];
}
int main()
{
    // int n=2345;
    // solve(n);
    string ans = countAndSay(4);
    cout << ans;
}