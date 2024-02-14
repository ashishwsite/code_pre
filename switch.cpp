#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<" enter two integer for doing  maths opration "<<endl;
    cin>>a>>b;
    char o;
    cout<<"for plus enter 1,simalarly for rest of the left oprator ";
    cin>>o;
    switch (o)
    {
    case /* constant-expression */ '+':
        /* code */ cout<<a+b;
        break;
    case '/' :
    cout<<a/b;
    default:
    cout<<a*b;
        break;
    }
}