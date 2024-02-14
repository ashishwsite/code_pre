#include<iostream>
using namespace std;
 long fac(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return a*fac(a-1);
    }
}
int main(){
    //programe which find the valu of ncr
    cout<<"enter the valu of n and r respectively  "<<endl;
    int n, r;
    cin>>n>>r;
    long facn=fac(n);
    long facr=fac(r);
    long facnmr=fac(n-r);
    int ans=facn/(facr*facnmr);
    cout<<ans;

}