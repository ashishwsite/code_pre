#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(n>10){
        string str=to_string(n-2);
        
        string ans;
        ans.push_back(s[0]);
        for(int i=0;i<str.size();i++){
        ans.push_back(str[i]);
        }
        ans.push_back(s[n-1]);
        cout<<ans<<endl;
        }
        else
        cout<<s<<endl;

    }
}