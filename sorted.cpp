#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    // sort(arr, arr+n);

   // Write your code here
    int zero=0;
     for(int i=0;i<n;i++){
        if(arr[i]==0)
            zero=zero++;
     }
    int first=0 ;
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            first=first++;
    }
    int second=0;
     for(int i=0;i<n;i++){
        if(arr[i]==0)
            second=second++;
     }
    for(int i=0;i<zero;i++){
        arr[i]=0;
    }
    for(int i=zero;i<first;i++)
        arr[i]=1;
    for(int i=first;i<second;i++)
        arr[i]=2;
}
   

int main() {
    // int t;
    // cin >> t;

    // while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}