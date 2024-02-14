#include <iostream>
#include<string>
using namespace std;
// to convert the digit into spelling 
void spelling(int N)
{
    if (N <= 0)
        return;
    spelling(N/10);// void hai isliye return me se funtion ko call nahi karenge 
    int n=N%10;// hame pahle last digit parr pahuchana hai iske baad me print karna hai isliye code recussion ke bad me likha hua 
   string str[10]={"zero","one","two","three","four","five","six","sevev","eight","nine"};
    cout<<str[n]<<" ";
  
}
int main()
{
    int d;
    cout << "enter a digit ";
    cin >> d;
    spelling(d);
   
}