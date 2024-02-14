#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Person
{

    string  name;
    int age;

public:
    void set(string n, int a)
    {
        name = n ;
        age = a;
    }
    void get()
    {
        cout << "The name of the person is " << name << " and the age is " << age;
    }
    // Complete the class
};

int main()
{

    Person i;
    // Write your code here
    string name;
    cout<<"lkdghdf";
    int age;
    cin >> name;
    cin >> age;
    i.set(name, age);
    i.get();

    return 0;
}