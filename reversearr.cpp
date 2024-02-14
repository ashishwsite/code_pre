#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "-";
    }
    cout << endl;
}
void reversearr(int arr[],int n)
{
    // int n = sizeof(arr) / sizeof(arr[0]);
    int tem[n];
    for (int i = 0; i < n; i++)
    {
        tem[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = tem[i];
    }
    
}
int main()
{
    int arr[] = {4, 9, 3, 5, 2, 3, 3, 9, 78, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // FOR MAKING UNKNOW SIZE ARRAY MAKE ARR WITHOUT GIVE ITS SIZE
    cout << "array before reverese " << endl;
    printarr(arr,n);
    reversearr(arr,n);
    cout << "array after reverese " << endl;
    printarr(arr,n);
}