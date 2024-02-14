#include <bits/stdc++.h>
using namespace std;
int val(char c)
{
  if (c == 'I')
    return 1;
  else if (c == 'V')
    return 5;
  else if (c == 'X')
    return 10;
  else if (c == 'L')
    return 50;
  else if (c == 'C')
    return 100;
  else if (c = 'D')
    return 500;
  else
    return 1000;
}
int romanToInt(string s)
{
  int len = s.size();
  if (len % 2 == 0)
  {
    int ans = 0;
    for (int i = 0; i < len ; i + 2)
    {
      int val1 = val(s[i]);
      int val2 = val(s[i + 1]);
      if (val1 >= val2)
      {
        ans = ans + val1 + val2;
      }
      else
      {
        ans = ans + val2 - val1;
      }
    }
    return ans;
  }

  else
  {
    int ans = val(s[0]);
    for (int i = 1; i < len - 1; i + 2)
    {
      int val1 = val(s[i]);
      int val2 = val(s[i + 1]);
      if (val1 >= val2)
      {
        ans = ans + val1 + val2;
      }
      else
      {
        ans = ans + val2 - val1;
      }
    }
   // cout<<"using odd size"<<endl;
    return ans;
  }
}

int main()
{
  string s = "I";
  int ans = romanToInt(s);
  cout << ans;
}
