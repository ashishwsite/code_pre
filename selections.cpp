#include <iostream>
#include <vector>
// selection sort on array
using namespace std;
void selections(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (v[i] > v[j])
            {
               swap(v[i],v[j]);// swap function already define in vector template liblary 
            }
        }
    }
}
int main()
{
    vector<int> v = {5, 9, 46, 2, 90};
    
    selections(v, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}