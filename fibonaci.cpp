#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return(fib(n-1)+fib(n-2));
}
int main(){
    cout<<"enter a number to get fibnaci ";
    int a;
    cin>>a;
    int ans =fib(a);
    cout <<ans;
}