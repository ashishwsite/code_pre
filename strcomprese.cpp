#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    vector<char> v = {'A'};
    // cout<<"line 7"<<endl;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(v.end() - 1) != chars[i])
        {
            if (cnt != 1 && cnt != 0)
                v.push_back(cnt);
            cnt = 1;
            v.push_back(chars[i]);
        }
        cnt++;
    }
    // cout<<"line 7"<<endl;
    int s = v.size();
    chars.clear();
    //cout<<"line 7"<<endl;
    // for (int j = 1; j < s; j++)
    // {
    //     chars.push_back(v[j]);
    // }
   // cout<<"line 7"<<endl;
    return s - 1;
}
int main()
{
    // vector<char> st = {"a","a","b","b","c","c","c"};
    vector<char> vec = {'a', 'a', 'b', 'b'};
    int n = vec.size();
    cout << "before" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "-";
    }
    int id = compress(vec);
    cout << "after" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << "-";
    }
    return 0;
}