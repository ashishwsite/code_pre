#include <iostream>
using namespace std;
int sumofarr(int arr[], int size)
{
    if (size == 0){
        //cout<<"check"<<endl;
        return 0;
        
    }
    if (size == 1)
    {
       // cout<<"check"<<endl;
        return arr[0];
    }
    else
    {
       // cout<<"check986"<<endl;
        int remaingpart = sumofarr(arr + 1, size - 1);
        return remaingpart+arr[0];
    }
}
int main()
{
    int arr[] = {2, 6, 9, 8, 10};
    int sum = sumofarr(arr, 5);
    cout<<sum;
  //  cout<<"here to sucussfully";
    return 0;
}