#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows)
{
    int row = numRows;
    vector<vector<int>> ans;
    ans[0][0] = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                ans[i][j] = 1;
                cout << ans[i][j] << endl;
            }
            else
            {
                int ele = ans[i - 1][j - 1] + ans[i - 1][j];
                ans[i][j]= ele;
                cout<<ans[i][j]<<endl;
            } 
        }
    }
    return ans;
}
int main()
{
    int numRows = 1;
    //   cin>>numRows;
    vector<vector<int>> ans = generate(numRows);
    // int n = ans.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ans[i][j] << endl;
    //     }
    // }
}