#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int nl=needle.size();
        cout<<"size of needle is "<<nl<<endl;
        
        int hl=haystack.size();
        cout<<"six=ze of haystack "<<hl<<endl;
        for(int i=0; i<=hl-nl;i++){
         string ans=haystack.substr(i,2);//?? 2 ka matalab  hai ki i ke badd se 2 index ta k ko subdtring 
         cout<<ans<<endl;
         cout<<needle<<endl;
            if(ans==needle){
              return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution obj;
    int ans=obj.strStr("sadbutsad","sad");
    cout<<ans;
}