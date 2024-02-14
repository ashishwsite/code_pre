#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.size();
    if (n <= 1)
        return 1;
    string temp;
    for (int i = 0; i < n; i++)
    {
        char upp = s[i];
        if (isupper(upp))
        {
            s[i] = tolower(upp);
        }
        if (islower(s[i]) || isdigit(s[i]))
        {
            temp.push_back(s[i]);
        }
    }
    int i = 0;
    int j = n - 2;
    while (i <= j)
    {
        if (temp[i] != temp[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int main()
{
    string s = "A man, a plan, a canal: Panama";
   // cout<<"size of s"<<s.size();
    bool ans=isPalindrome(s);
    cout<<ans;
}