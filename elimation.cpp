#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    bool lr = true;
    // cout<<v.size();
    while (v.size() != 1)
    {
        if (lr)
        {
            auto it = v.begin();
            // cout<<*it;
            // cout<<*(v.end()-1);
            while (it != v.end())
            {
                v.erase(it);
                it++;
                cout<<*it;
            }
            lr = !lr;
        }
        else
        {
            auto it = v.end() - 1;
            while (it >= v.begin() - 1)
            {
                v.erase(it, it - 1);
                it - 1;
            }
            lr = !lr;
        }
    }
    cout << v[0];
}