#include<bits/stdc++.h>
using namespace std;
 int pivotIndex(vector<int>& nums) {
        const int  n=nums.size(); 
        int ls=0;
        int rs=0;
        for(int i=-1;i<n;i++){
            if(i<0 ) ls=0;
            else{
            ls=ls+nums[i];
            }
            cout<<"the ls= "<<ls<<endl;
            int j=i+2;
             cout<<"the rs at starting of whilw e = "<<rs<<endl;
            while(j<n ){
                rs=rs+nums[j];
                cout<<"the rs= "<<rs<<endl;
                if(rs==ls) return i+1;
                j++;
                
            }
            rs=0;
        }
        return -1;
        
    }
int main(){
    vector<int> v={-1,-1,-1,-1,-1};
    int ans=pivotIndex(v);
    cout<<ans;
   

}