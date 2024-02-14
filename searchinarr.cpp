// STL Function to find index of a element
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
    int arr[] = {12, 56, 823, 7, 1023};
    int n = sizeof(arr) / sizeof(arr[0]);

    int element =4 ;

    // using stl function
    int index = find(arr, arr + n, element) -arr;
    cout<<index<<endl;// if not find its return next indeex of last element 

    if (index < n)
    {
        cout << "Index of " << element<<" is "<< index << endl;
    }
    else
    {
        cout<< "Element does not exist in array" << endl;
    }

    return 0;
}