#include<iostream>
using namespace std;
  int subtractProductAndSum(int n) {
        int sum=0;
        int p=1;
        while(n!=0){
            sum=sum + n%10;
            p=p*(n%10);
           n=(n-n%10)/10;
             
        }
        return(p-sum);
    }
int main(){
    cout<<"enter a integer , which product of digit and sum of digit,  difference wanted to calculated ";
    int n;
    cin>>n;
    int v=  subtractProductAndSum(n);
    cout<<v;
    
}