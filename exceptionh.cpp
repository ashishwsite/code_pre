// this programe in which exception handling see
#include <iostream>
using namespace std;
int main()
{
    int a, f;
    cout << "enter two integer ";
    cin >> a >> f;
    try
    {
        if (f == 0)
            throw f;

        else
            cout << "result = " << a / f;
    }
    // catch(int b){
    //     cout<<"can't divide with 0";

catch (...)
{
    cout << "catch call default ";
}
return 0;
}