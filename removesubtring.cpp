#include <bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part)
{
    int change = 1;
    int n = s.size();
    while (change == 1)
    {
        int pos = s.find(part);
       // cout<<pos<<endl; 
        if (pos !=-1)
        {
            s.erase(pos, part.length());
            change = 1;
           // cout<<s<<endl;
        }
        else{
        change=0;
        }
    }
    return s;
}
int main()
{
    string s = "axxxxyyyyb";
    string part = "xy";
    vector<char> c=1;
   // string ans=removeOccurrences(s,part);
   // cout<<ans;
    // auto pos=s.find(part);
    // s.erase(pos, part.length());
    // cout<<s;
    cout<<"before"<<endl;
    cout<<*(c.end()-1)<<endl;
    cout<<"result is printed";
}