#include <iostream>
#include <vector>
// buble short of any vector
using namespace std;
void bubbles(vector<int> &name, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -i; j++)
        {
            if (name[j] > name[j+1])
                swap(name[j], name[j+1]);// inside the array size or index [i++]  not work 
                                        // used [i+1 ] is work 
        }
    }
}
int main()
{
    vector<int> sel = {5, 9, 56, 93, 78, 12, 65, 7};
    bubbles(sel, 8);
    cout << "element after sorting is " << endl;
    {
        for (int i = 0; i < 8; i++)
            cout << sel[i] << " ";
    }

    return 0;
}