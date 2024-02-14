#include <iostream>
using namespace std;
class quadratic
{
public:
    int x2, x, c;
    quadratic(int a, int b, int d)
    {
        x2 = a;
        x = b;
        c = d;
    }
    quadratic()
    {
        x2 = 0;
        x = 0;
        c = 0;
    }
    quadratic operator+(quadratic g)
    {
        quadratic t;
        t.x2 = x2 + g.x2;
        t.x = x + g.x;
        t.c = c + g.c;
        return t;
    }
};
int main()
{
    quadratic q1(1, 5, 6), q2(1, 6, 8), q4(7,9,6), q3;
    q3 = q1 + q2 + q4;

    cout << "quadratic equation afer adding " << endl
         << q3.x2 << "x2 +" << q3.x << "x + " << q3.c << endl;
    return 0;
}