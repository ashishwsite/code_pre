#include<bits/stdc++.h>
using namespace std;
  int fillCups(vector<int>& amount) {
        sort(amount.begin(),amount.end());
        int a=0;
        for(auto v:amount){
            cout<<v<<" ";
        }
        while(amount[0]!=0){
            a++;
            cout<<amount[0]<<" ";
            amount[0]--;
            if(amount[1]!=0){
                amount[1]--;
            }
              sort(amount.begin(),amount.end());
        }
        return a; 
    }
int main(){
    vector<int> v={1,4,2};
    int ans=fillCups(v);
    cout<<"ans"<<ans;

}