#include <bits/stdc++.h>
using namespace std;
// //================================================================
// //USING REC
// int coinChange(vector<int> &coins, int amount)
// {

//     if (amount == 0)
//         return 0; // 1ST BASE CASE
//     if (amount < 0)
//         return INT_MAX; // 2ND BASE CSE
//     int mini = INT_MAX;
//     for (int i = 0; i < coins.size(); i++)
//     {

//         int res = coinChange(coins, amount - coins[i]); // RECU RELATION
//         if (res != INT_MAX)
//         { // THIS ONLY SO INT NOT OVERFLOW
//             mini = min(mini, res + 1);
//         }
//     }
//     return mini;
// }
// //=========================================
// // USING MEMORIASATION  1-PASS A DP ARRAY
// int coinChange(vector<int> &coins, int amount,vector<int>&dp)
// {

//     if (amount == 0)
//         return 0; // 1ST BASE CASE
//     if (amount < 0)
//         return INT_MAX; // 2ND BASE CSE
//     if(dp[amount]!=-1) return dp[amount];     // adding these additional test case in memoriasation
//     int mini = INT_MAX;
//     for (int i = 0; i < coins.size(); i++)
//     {

//         int res = coinChange(coins, amount - coins[i],dp); // RECU RELATION
//         if (res != INT_MAX)
//         { // THIS ONLY SO INT NOT OVERFLOW
//             mini = min(mini, res + 1);
//         }
//     }
//     //  return mini;  // this code for rec sol
//     dp[amount]=mini;
//     return dp[amount];
// }
//===========================================
// USING TABILATION BUTTON UP 0 SE END TAK
int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, INT_MAX);
    // base case replace with array value
    // if (amount == 0)
    //     return 0; // 1ST BASE CASE
    // if (amount < 0)
    //     return INT_MAX; // 2ND BASE CSE
    dp[0] = 0; // bcase
    for (int i = 1; i <= amount; i++)
    {
        for (int j = 0; j < coins.size(); j++)
        {
            if (i - coins[j] >= 0 && dp[i - coins[j]] != INT_MAX)
                dp[i] = min(dp[i], 1 + dp[i - coins[j]]);// this come from recursion rel
        }
    }
    return dp[amount];
}
int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;
     int ans = coinChange(coins, amount); // this for recursion
    // vector<int> dp(amount + 1, -1);
    // int ans = coinChange(coins, amount, dp); // this for memorasiation
                                             // RCURSION====================
    if (ans == INT_MIN)
    {
        cout << -1;
    }
    else
        cout << ans << endl;
    //=== ================
    return 0;
}
