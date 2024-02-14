#include<bits/stdc++.h>
using namespace  std;
void visit(int n){
    int d=n%10;
    cout<<d;
    if(n>10){
        n=n/10;
        visit(n);
    }

}
int main(){
  int n;
  cin>>n;
  visit(n);

}