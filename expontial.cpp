#include<iostream>
using namespace std;
long long  expon(int n){
    if(n==0)
    return 1;
    return(3*expon(n-1));

}
int main(){
    cout<<"enter a number  to get its expontial of 3";
    long long s;
    int a;
    cin>>a;
    s=expon(a);
    cout<<s;

}