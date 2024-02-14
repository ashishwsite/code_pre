#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int a;
    int b;
    cin>>a;
    cin>>b;
    if(a>0 && b>0)
        cout<<"1st Quadrant ";
    if(a>0 && b<0)
        cout<<"4th Quadrant";
    if(a<0 && b<0)
        cout<<"3rd Quadrant";
    if(a<0 && b>0)
        cout<<"2nd Quadrant";
    if(a==0 &&b==0)
        cout<<"Orgin";
    if(a>0 && b==0)
        cout<<"x axis";
    if(b>0 && a==0)
        cout<<"y axis";
    if(a<0 && b==0)
        cout<<"x axis";
    if(b<0 && a==0)
        cout<<"y axis";
    
    return 0;
}