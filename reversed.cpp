#include <iostream>
#include <math.h>
// this is program which reverse the digit in number
using namespace std;
int main()
{
    cout << "enter a number ";
    int n;
    cin >> n;
    int ans = 0;
    while (n != 0)
    {
        int d = n % 10;
        ans = (ans * 10) + d;
        n = n / 10;
    }
    cout << ans;
}