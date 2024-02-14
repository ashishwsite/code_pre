#include<iostream>
#include<vector>
using namespace std;
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=(s+e)/2;
        while(s<e){
           
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else
            e=mid;
            mid=(s+e)/2;// s aur e  update ho kar ke change nhia hota hai isliye hame lopop me hi itration ko badaan padega 
        }
        return mid;
    }
int main(){
    vector<int> arr={5,6,9,78,36,2};
    int peek= peakIndexInMountainArray(arr);
    cout<<"peek index is "<<peek;
}
// TLE time limit exist hone ka karan ek infinte loop hone se bhi hota hai 
// is liye ek barr infinte looop conditiion bbhi check karlena

     