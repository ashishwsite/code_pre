#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int> &v){
        if(n<=1){
                return n;
        }
        if(v[n]!=-1){
                return v[n];
        }
        v[n]=fib(n-1,v)+fib(n-2,v);
        
        return 0;
}

int main()
{
        /*
        *  Write your code here. 
         *  Read input as specified in the question.
         *  Print output as specified in the question.
        */
        int n;
        cin>>n;
        vector<int> v(n+1,-1);
        cout<<fib(n,v);
}