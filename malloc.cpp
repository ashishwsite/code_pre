#include<iostream>
using namespace std;
int main(){
    int len;
    cin>>len;
    cout<<"valu of len ="<<len<<endl;
    int*ptr;
    ptr=(int*)malloc(sizeof(int)*len);
    cout<<sizeof(ptr)<<endl;
    cout<<"valu of len"<<len;

    return 0 ;
}