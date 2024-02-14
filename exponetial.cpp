#include<iostream>
using namespace std;
long long power(int x,int n){
	if (n==0)
	return 1;
	return (x*power(x,n-1));
}
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int ans=power(x,n)%m;
	return ans;
}
int main(){
    int x,n,m;
    cout<<"write 3 interger "<<endl;
    cin>>x>>n>>m;
    int r=modularExponentiation( x,  n,  m);
    cout<<r;

}