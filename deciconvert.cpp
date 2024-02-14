#include <iostream>
#include <math.h>
// programe which convert binaary to decimal;
using namespace std;
int main()
{
    int n;
    cout << "enter number ";
    cin >> n;
    int i = -1;
    int d = 0;
    while (n != 0)
    {
        int b = n % 10;
         i++;
        if (b == 1){
            d = pow(2, i) + d;
        }
        n=n/10;
    }
    cout<<d;
}