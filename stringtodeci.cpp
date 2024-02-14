#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "25";
    int l = name.size();
    cout << "size of name is " << l << endl
         << "0 th " << name[0] << "- 1th is " << name[1] << "  - last(3th ) is" << name[3] << endl;

    int n = 0;
    for (int i = 0; i < l; i++)
    {
        int p = l - 1 - i; // p give the position of  digit from last like one ,tens, hundred
        // // cout<<p<<endl;
        // cout<<pow(10,p)<<endl;
        // cout<<n<<endl;
        // int d=name[i]---> cout<<d<<endl;    yaha par d ki valu 49  aat ahai koi abi d ek char hai
        int d = name[i] - '0'; // method to convert char to int by minus ewith 0

        n = d * pow(10, p) + n;
    }
    cout << n;

    return 1;
}