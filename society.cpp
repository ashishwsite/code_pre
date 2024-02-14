#include<bits/stdc++.h>
using namespace std;
int main(){
    float am=1000;
    for(int i=1;i<=60;i++){
        cout<<am<<endl;
         am=am*2/100+am+1000;
    }
    cout<<am;
}
