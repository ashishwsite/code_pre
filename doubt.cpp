#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    // cout<<"16";
    map<int, int> m;
    // cout<<"size"<<s.size()<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        int num=int(s[i])-48;

        m[num]++;
    }
    for(auto val:m){
        // cout<<val.first<<endl;
        cout<<val.second<<" ->"<<val.first<<endl;
    }
}
int main(){
// string s="1";
solve("1");
}