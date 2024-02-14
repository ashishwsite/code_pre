// program to merge shot to shoting an array
#include <iostream>
using namespace std;
void merge(int arr[], int s, int m, int e)
{
    int l1 = m - s + 1;
    int l2 = e -m;
    int first[l1];
    int second[l2];
    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[s + i];
    }
    for (int j = 0; j < l2; j++)
    {
        second[j] = arr[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = s;
    while (i < l1 && j < l2)
    {
        if (first[i] <= second[j])
        {
            arr[k] = first[i];
            i++;
        }
        else
        {
            arr[k] = second[j];
            j++;
        }
        k++;
    }
    while (i < l1)
    {
        arr[k] = first[i];
        i++;
        k++;
    }
    while (j < l2)
    {
        arr[k] = second[j];
        j++;
        k++;
    }
}
void mergeshot(int arr[], int s, int e)
{
    if (e <= s) // base case
        return;
    int m = s + (e - s) / 2; // mis midindex of arr
    mergeshot(arr, s, m);
    mergeshot(arr, m + 1, e);
    merge(arr, s, m, e);
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}
int main()
{
    int arr[4] = {5, 45, 3, 6};
    int l = 0;
    int e = 3;
    mergeshot(arr, l, e);
    printarr(arr, 4);
}