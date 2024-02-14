#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int a=3;
//     while (a--)//negative par loop se bahar aa jaega
//     {
//         cout<<a<<endl;
//     }
    
// }
int checkprime(int a){
    int cnt=0;
    if(a==1)
    return 0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        cnt++;
        if(cnt>=3)
        return 0;
    }
    return 1;
}
int cprime(int a,int b,int c){
    int cnt=0;
    
    for(int i=a;i<=b;i++){
        if(checkprime(i)==1){
            cnt=cnt+1;
            if(cnt==c)
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    int a=1;
    int b=100;
    int c=5;
    // cin>>t>>a>>b>>c;
    // while(t--){

        int ans=cprime(a,b,c);
        cout<<ans<<endl;

}