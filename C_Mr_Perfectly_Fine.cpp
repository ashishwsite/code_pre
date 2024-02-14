#include <bits/stdc++.h>
using namespace std;
int fun(multimap<int, string> m, int n)
{
    int bsum = 0;
    int mins = 0;
    int trick = -5;
    for (auto ms2 : m)
    {
        if (ms2.second == "11")
        {
            trick = ms2.first;
            break;
        }
    }
    for (auto i : m)
    {
        if (i.second == "11")
            return i.first;

        else if (i.second != "00")
        {
            bsum = bsum + 1;
            //  cout << "booksum" << bsum << endl;
            mins = mins + i.first;
            //  cout << "msum" << mins << endl;
            if (trick != -5)
            {
                if (bsum == 2 && mins < trick)
                    return mins;
                else
                    return trick;
            }
            else
            {
                if (bsum == 2)
                    return mins;
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        multimap<int, string> m;
        for (int k = 0; k < n; k++)
        {
            int key;
            string valu;
            cin >> key;
            cin >> valu;
            m.insert({key, valu});
        }
        // cout<<"printing map "<<endl;
        // for(auto pair:m){
        //     cout<<pair.first<<" "<<pair.second<<endl;
        // }
        // cout<<"printing sucesss fully"<<endl;
        int ans = fun(m, n);
        if (ans > 9)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}