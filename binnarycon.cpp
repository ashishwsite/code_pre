#include<iostream>
#include<math.h>
using namespace std;
// this is  programe which convert decimal into binnary 
int main(){
    cout <<"enter a number ";
    int n;
    cin>>n;
    int ans=0;
    int b=0;
    while(n!=0){
        int bit=n%2;
        ans=(ans*10)+bit;
        n=n/2;
    }
    while(ans!=0){
        int d=ans%10;
        b=(b*10)+d;
        ans=ans/10;
    }
    cout<<b;

}