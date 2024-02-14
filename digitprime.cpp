#include <bits/stdc++.h> 
using namespace std;
int checkprime(int a){
  if(a==1)
  return 0;
    int cnt=0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
        cnt++;
        if(cnt>=3)
        return 0;
    }
    return 1;
}
int digit(int i){
    while(i>9){
        int d=i%10;
        if(checkprime(d)==0)
        return 0;
        i=i/10;
    }
    if(checkprime(i)==1)
    return 1;
    else
    return 0;
}
int main(){
    int pdigit=digit(73);
    cout<<pdigit;
}