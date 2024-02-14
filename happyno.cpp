#include <bits/stdc++.h>
using namespace std;
// class Solution {
// public:
//     bool isHappy(int n) {
//         if(n<10 &&  n!=1)
//             return 0;
//         else{
//             vector<int> arr ;
//             while(n>0){
//       arr.push_back(n%10);
//                 n=n/10;
//             }
//              int ans=0;
//      for(int i=0;i<arr.size();i++){
//          ans+=arr[i]*arr[i];
//                   }
//             return  isHappy(ans);
//         }

//     }
// };
int isHappy(int n)
{
    if (n < 10 && n != 1)
        return 0;
    else
    {
        vector<int> arr;
        while (n > 0)
        {
            arr.push_back(n % 10);
            n = n / 10;
        }
        int ans = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            ans += arr[i] * arr[i];
        }
        isHappy(ans);
        return 0;
        
    }
}
int main()
{

    int n = 19;
    int ans = isHappy(n);
    cout << ans;
}