#include <iostream>
//#include <stack>
using namespace std;
class stack
{
    int size;
    int rear;
    int *arr;

public:
    stack()
    {
        size = 265650;
        rear = 0;
        arr = new int[size];
    }
    bool isempty()
    {
        if (rear >= size)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    void push(int data)
    {
        if (rear >= size)
        {
            cout << "stack is full " << endl;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        if (rear == 0)
        {
            cout << "stack is empty delataion not possible" << endl;
        }
        else
        {
            int del = arr[rear];
            rear--;
        }
    }

    int top()
    {
        if (rear == 0)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            int ele = arr[rear];
            return (ele);
        }
    }
};

int main()
{
    // stack<int> s;
    stack s;
    s.push(5);
    cout << "top ele " << s.top() << endl;
    s.push(7);
    s.push(9);
    s.push(4);
    s.push(1);
    cout << s.top() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << "top ele " << s.top() << endl;
    cout << "emptyness " << s.isempty() << endl;
    // cout << "size is " << s.size() << endl;
    return 0;
}