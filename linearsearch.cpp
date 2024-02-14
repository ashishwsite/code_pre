#include <iostream>
#include <vector>
// linear search in vector and in array
using namespace std;
int linears(vector<int> &name, int size, int valu)
{
    for (int i = 0; i < size; i++)
    {
        if (name[i] == valu)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> odd = {2, 9, 8, 6, 5, 1};
    int linears(vector<int> & name, int size, int valu);
    int postion = linears(odd, 6, 5);
    cout << "the index of 5 is " << postion << endl;
    cout << "the index of11  is " <<linears(odd, 6, 11);

    return 0;
}