#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the princple amount "<<endl;
    float p;
    cin>>p;
    cout<<"enter the mounth ";
    int m;
    cin>>m;
    for(int i=1;i<=m;i++){
         p=p+p*0.05;
    }
    cout<<p;
}