#include <bits/stdc++.h>
using namespace std;
int partion(int arr[], int s, int e)
{
    int pivot = arr[s];
    int c = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
            c++;
    }
    int pi = s + c;
    swap(arr[s], arr[pi]);
    // making left elelement from pi is small than pivot
    int i = s;
    int j = e;
    while (i < pi && j > pi)
    {
        while (arr[i] < arr[pi])
        {
            i++;
        }
        while (arr[j] > arr[pi])
        {
            j--;
        }
        if (i < pi && j > pi)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pi;
}
void quickshort(int arr[], int s, int e)
{
    if (s > e)
        return;
    int p = partion(arr, s, e);
    // partion ke left ko short
    quickshort(arr, s, p - 1);
    // partion ke right ko solve karna
    quickshort(arr, p + 1, e);
}
int main()
{
    int n = 5;
    int arr[] = {1, 96, 34, 56, 6};
    quickshort(arr, 0, n - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}