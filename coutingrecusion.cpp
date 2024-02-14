#include<iostream>
using namespace std;
// void couting(int n){
//    if(n>=1){
//    cout<<n<<" ";
//  couting(n-1);
//    }
// }
void couting(int n){
    if(n<=0)
    return ;
    couting(n-1);
    cout<<n<<" ";
}

int main(){
    int c;
    cout <<"enter a number to print couting ";
    cin>>c;
   couting(c);
}