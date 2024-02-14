#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> my;
    my.push_back(5);
    my.push_back(8);
    my.push_back(59);
    cout<<my.at(1)<<endl;
    my.push_front(89);
    cout<<my.at(1);
    cout<<my.empty();

    return 0;
}