#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 6, 9, 10, 12};
    int *ptr = &arr[0];
    cout << "adress of starting array " << arr << endl;
        cout << "adress of starting array " << ptr << endl;
    cout << "size of a given array is " << sizeof(arr) << endl;
        cout << "adress of starting array " << arr[0] << endl;
    return 0;
}