#include<bits/stdc++.h>
using namespace std;
  bool even(int v){
        int d=0;
        int pv=v;
        while(v>0){
            d++;
            v=v/10;
        }
        
        if(d%2==0){
            // cout<<v<<"";
            string s=to_string(pv);
            int r=0;
            int ls=0;
            // cout<<s<<" ";
            for(int j=d/2-1;j>-1;j--){
                
                 ls=ls+int(s[j])-48;
            }
            for(int j=d/2;j<d;j++){
                 r=r+int(s[j])-48;
            }
            // cout<<r<<" " <<ls<<"|" ;
            if(r==ls) return 1;
            return 0;
            
        }
        return 0;
    }
    int countSymmetricIntegers(int low, int high) {
        vector<int> v;
        for(int i=low;i<=high;i++){
            v.push_back(i);
        }
        int   cnt=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
            if(even(v[i])){
                cnt++;
                // cout<<cnt<<" " ;
            }
        }
        return cnt;
        
        
    }
int main(){
    int l=0;
    int h=100;
    int ans=countSymmetricIntegers(1,100);
    cout<<"ans"<<ans;
}