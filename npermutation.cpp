#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << nums[i] << endl;
    // }
    vector<int> temp = nums;

    int m = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] < nums[i + 1])
        {
            m = 1;
            break;
        }
    }
   // cout << "valu of m " << m << endl;
    if (m == 0)
    {
        for (int i = 0; i < n; i++)
        {
            nums[i] = temp[n-1-i];
        }
        return;
    }
    for (int j = n - 1; j > -1; j--)
    {
        if (nums[j] > nums[j - 1])
        {
            swap(nums[j], nums[j - 1]);
            return;
        }
    }
    return;
}

int main()
{
    vector<int> v = {1,1,5};

    nextPermutation(v);
    // int n = v.size();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }
}