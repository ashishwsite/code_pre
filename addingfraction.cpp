#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
class Fraction
{
public:
    long long int n;
    long long int d;
    long long int den;
    long long int num;
    Fraction(long long int a, long long int c)
    {
        this->n = a;
        this->d = c;
    }
    void add(Fraction &c)
    {
        //this->d = this->d * c.d;
        this->n = (this->n * c.d) + (this->d * c.n);
         this->d = this->d * c.d;
    }
    void multiplay(Fraction &g)
    {
        this->d = this->d * g.d;
        this->n = this->n * g.n;
    }
    void simplify()
    {
       // cout<<"27";
        int j = min(n, d);
        for (int i = 1; i <= j; i++)
        {
           // cout<<"31";
            if (n % i == 0 && d % i == 0)
            {
                num = n / i;
                den = d / i;
                //cout<<"36";
            }
        }
    }
    void print()
    {
       // cout<<"42";
        cout << num  << "/" << den<<endl;
       // cout<<"44";
    }
};

int main()
{

    int n1, d1;
    cin >> n1 >> d1;
    int q;
    cin >> q;
    Fraction f1(n1, d1);
    while (q > 0)
    {
        int oper, n2, d2;
        cin >> oper >> n2 >> d2;
        Fraction f2(n2, d2);
        if (oper == 1)
        {
           // cout<<"at 58";
            f1.add(f2);
           // cout<<"at 60 ";
            f1.simplify();
           // cout<<"at 62";
            f1.print();
            //cout<< "64";
        }
        else
        {
            f1.multiplay(f2);
            f1.simplify();
            f1.print();
        }
        q--;
    }
    return 0;
}