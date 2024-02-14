#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l;
        cin>>l;
        int arr[l]={0};
        for(int i=0;i<l;i++){
            cin>>arr[i];
        }
        int k=1;
        while(k<=l){
            int f=1;
            int s=1;
            for(int i=0;i<k;i++){
                f=f*arr[i];
            }
            for(int i=k;i<l;i++){
                s=s*arr[i];
            }
            if(f==s)
            {
                cout<<k<<endl;
                break;
            }
            k++;
        }
        if(k==l+1)
        cout<<"-1";


    }
}