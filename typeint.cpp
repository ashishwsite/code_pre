#include<iostream>
using namespace std;
int main(){
    //checking given number is odd, prime, even
    cout<<"enter a any integer "<<endl;
    int n;
    cin>>n;
    int r=n%2;
    switch (r)
    {
    case 0:
    cout<<"given number is even";
        break;
    case 1:
    cout<<"given number is odd ";

        break;
    }
}