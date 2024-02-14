#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
class Rectangle {
    // Write your code here.
    public:
    int l;
    int b;
    int getarea(){
        return l*b;
    }
};
int main(){
    cout<<2%10;
    Rectangle r;
    cin>>r.l;
    cin>>r.b;
    cout<<r.getarea();
    return 0;
}