#include <bits/stdc++.h>
using namespace std;
// int bsearch(vector<int> &nums, int target)
// {
//     int l = 0;
//     int r = nums.size();
//     while (l < r)
//     {
//         int mid = l + (r - l) / 2;
//         if (nums[mid] < target)
//         {
//             l = mid + 1;
//         }
//         else
//             r = mid;
//     }
//     return r;
// }
int main()
{
    // vector<int> arr = {5, 9, 11, 13, 75};
    // int ans = bsearch(arr, 6);
//     string s;
//     int ans=s.length();
//     cout << ans;
// }
int n;
        cin >> n;
        map<int, string> m;
        for (int i = 0; i < n; i++)
        {
            int mi;
            string str;
            cin >> mi >> str;
            m[mi]=str;
        }
        for(auto pair:m){
            cout<<pair.first<<" "<<pair.second<<endl;
        }
}