#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        vector<int> temp;
        //  cout<<temp[2];
        int one = 0;
        int two = 0;
        while (one < (m - n) && two < n)
        {
            if (nums1[one] <= nums2[two])
            {
                temp.push_back(nums1[one]);
                one++;
            }

            else
            {
                temp.push_back(nums2[two]);
                two++;
            }
        }

        while (one < (m - n))
        {
            temp.push_back(nums1[one]);
            one++;
        }

        while (two < n)
        {
            temp.push_back(nums2[two]);
            two++;
        }
        for (int i = 0; i < m; i++)
        {
            nums1[i] = temp[i];
        }
        // for (int i = 0; i < m; i++)
        // {
        //     cout << nums1[i] << " ";
        // }
    }
};
int main()
{
    Solution obj;
    vector<int> nums1 = {5, 9, 16, 25, 56, 72, 89, 0, 0, 0, 0, 0, 0};
    vector<int> nums2 = {4, 6, 8, 13, 65, 94};
    obj.merge(nums1, 13, nums2, 6);
    for (int i = 0; i < 13; i++)
    {
        cout << nums1[i] << " ";
    }
}