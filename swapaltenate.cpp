#include <iostream>
using namespace std;
//swaping of altenate element in a array 
void printa(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<"->";
    }
    cout << endl;
}
void alters(int arr[], int s)
{
    for (int i = 0; i < s; i+=2)
    {
        if(i+1<s)
        swap(arr[i], arr[i + 1]);
    }
    cout<<endl;
}
int main()
{
    int odd[5] = {1, 9, 6, 3, 84};
    int even[6] = {9, 97, 36, 59, 25, 6};
    cout << "array before swaping is " << endl;
    printa(odd, 5);
    cout << "array after swaping is " << endl;
    alters(odd, 5);
    printa(odd, 5);
    cout << "array before swaping is " << endl;
    printa(even, 6);
    cout << "array after swaping is " << endl;
    alters(even, 6);
    printa(even, 6);

}