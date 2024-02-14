#include <iostream>
// this programe is for calculating the pair sum of array
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int s = arr[i] + arr[j];
            if (s == k)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / (sizeof(arr[0]));

    //int rs=-2;
    int rs=6;
     int ans = pairsum(arr, n, rs);
    if (ans == 0)
    {
        cout << "pair sum not found " << endl;
    }
    else
    {
        cout << "pair sum is found" << endl;
    }
}