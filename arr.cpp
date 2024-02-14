#include <iostream>
using namespace std;
int minielearr(int arr[],int n){
    int mini=INT8_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
int maxelearr(int arr[],int n){
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int findele(int a[], int size, int data)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (a[i] == data)
        {
            return i;
        }
    }

    return -1;
}
void insert( int a[], int n,int data){
    n=n+1;
    a[n+1]=data;
}
int main()
{
    int a[] = {5, 6, 8, 7, 20, 9, 2, 15};
    cout << a[0] << endl
         << a[6 / 4] << endl;
    // searchinhg of element int the array
    int n = sizeof(a) / sizeof(a[0]);
    cout <<"size previous is " <<n<<endl;
    insert(a,n,17);
   // int n = sizeof(a) / sizeof(a[0]);
    cout<<"size now is"<<n<<endl;

    int position = findele(a, n, 9);
    if (position == -1)
    {
        cout << " element not found " << endl;
    }
    else
    {

        cout << "element is found at postion of " << position + 1<<endl;
    }
    cout<<a[n+1]<<endl;
    int mini=minielearr(a,8);
    cout<<"minimum element in array is "<<mini<<endl;
    int max=maxelearr(a,8);
    cout<<"maximum  element in array is "<<max<<endl;
    return 0;
}