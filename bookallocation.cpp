#include <iostream>
#include <vector>
using namespace std;
bool ischeck(vector<int> arr, int m, int mid)
{
    int agr = 0;
    int scount = 1;
    for (int i = 0; i = arr.size(); i++)
    {
        if (agr + arr[i] <= mid)
        {
            agr += arr[i];
        }
        else
        {
            scount++;
            if (scount > m || arr[i] > mid)
            {
                return false;
            }
            {
            agr = arr[i]; 
            }
            if(scount> m){
                return false;
            }
        }
    }
    return true;
}
int bookall(vector<int> arr, int m)
{
    int sum = 0;
    int s = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int mid = s+ (e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        
        if (ischeck(arr, m, mid))// sahi HAI to pahele vale part me milega 
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s +(e-s)/2;
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 23, 32, 51};
    int m = 2;
    int maximum = bookall(arr, m);
    cout<<maximum<<"hey";
    return 0;
}