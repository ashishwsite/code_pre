#include <bits/stdc++.h>
using namespace std;
   int search(vector<int>& nums, int target) {
        int s=nums.size();
        int idx=-1;
        for(int i=0;i<s;i++){
       if(nums[i]>nums[i+1])
       {
         idx=i;
         break;
       }
        }
        vector<int> :: iterator  ans;
        if(idx==-1) 
        {
             ans=find(nums.begin(),nums.end(),target);
        }
        
       else if(nums[s-1]<target)
        {
             ans=find(nums.begin(),nums.begin()+idx,target);
        }
        else
        {
           ans=find(nums.begin() + idx ,nums.end(),target); 
        }
        return (*ans);
        
    }
    int main(){
        vector<int > nums={4,5,6,7,0,1,2};
        int target=0;
        int a=search(nums,target);
        cout<<a;
    }