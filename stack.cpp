#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(45);
    st.push(42);
    st.push(15);
    int e;
    e=pop();
    st.pop();
    int s=st.top();
    cout<<s;
    return 0;
}