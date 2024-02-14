#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> c;
    cout << "the size of stack" << c.size() << endl;
    c.push(56);
    cout << c.empty();
    c.push(9630);
    cout<<c.top();
    c.pop();
    cout<<c.top();

    return 0;
}