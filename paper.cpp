#include<iostream>
using namespace std;
int fun(int n,int x){
if(n>0)
return (n%3)+fun(n/3,x);
else 
return 0;

}
int main(){
   cout<<fun(513,3);
//    cout<<2/3;
//    cout<<2%3;
    return 0;
}
