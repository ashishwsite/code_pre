#include <bits/stdc++.h>
using namespace std;
bool canSplitArray(vector<int> &nums, int m)
{
    int n = nums.size();
    // cout<<"n="<<n;
    if (n <= 1)
        return true;

    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<i;
        for (int j = i; j < n; j++)
        {
            // cout << "j" << j << " ";
            sum = sum + nums[j];
            if (j == i || sum >= m)
            {
                cnt++;
            }
        }
        sum = 0;
    }
    if (cnt >= n)
        return true;
    return false;
}
int main()
{
    vector<int> nums = {2, 2, 1};
    int m = 4;
    cout << canSplitArray(nums, m);
}