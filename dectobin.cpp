#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int i=0;
    int ans=0;
    int n;
    cout<<"enter a number which binnary you wanted ";
    cin>>n;
    while(n!=0){
        int bit= n & 1;
        ans =(bit * pow(10,i)) + ans;
       
        n = n >> 1;
        i++;
    }
    cout<<ans<<endl;
}