#include <iostream>
using namespace std;
void update(int **p)
{
    //  p = p + 1;

    *p = *p + 1;

    **p = **p + 1;
}
int main()
{
    int i = 5;
    int *p1 = &i;
    // WHAT IS DOUBLE POINTER? it is pointer which corrosponding the another pointer
    int **p2 = &p1;
    // cout<<"okY" ;
    // cout<<"content of ptr "<<ptr<<endl;
    // cout<<"content of ptr using ptr3 "<<*ptr3;
    cout << "valu before udate " << endl;
    cout << "valu of i " << i << endl;
    cout << "valu at p1 " << p1 << endl;
    cout << "valu at p2 " << p2 << endl;
    cout << "valu after update call" << endl;
    update(p2);
    cout << "valu before udate " << endl;
    cout << "valu of i " << i << endl;
    cout << "valu at p1 " << p1 << endl;
    cout << "valu at p2 " << p2 << endl;

    return 0;
}