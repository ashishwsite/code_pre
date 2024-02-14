#include <bits/stdc++.h>
using namespace std;
// bool uniqc(char c ,string current){
//     int cl=current.length();
//     for(int j=0;j<cl;j++){
//         if(c==current[j]) return 0;
//     }
//     return 1;
// }
int lengthOfLongestSubstring(string s)
{
    vector<int> ans;
    int l = s.length();
    // cout<<l;
    if (l < 2)
        return l;
    string current = "";
    for (int i = 0; i < l; i++)
    {
        // cout << current << endl;
        int id = current.find(s[i]);
        // cout<<"id of ele"<<id<<endl;
        if (id >= 0)
        {
            current.erase(0, id + 1);
            current.push_back(s[i]);
        }
        else
        {
            current.push_back(s[i]);
            ans.push_back(current.length());
        }
    }
    // for (int k = 0; k < ans.size(); k++)
    // {
    //     cout << ans[k] << endl;
    // }
    int ANS = *max_element(ans.begin(), ans.end());
    return ANS;
}
// namespace std;
int main()
{
    string str;
    cin >> str;
    int ans = lengthOfLongestSubstring(str);
    cout << ans;
}
