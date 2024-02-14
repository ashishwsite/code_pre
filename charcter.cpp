#include <iostream>
using namespace std;
int main()
{
    char word[] = "ramashish";
    // charcter array me index 0 se till end tka orint kartanhai
    cout << word[4] << endl;
    cout << word[9] << endl;
    char *ptr = word;
    cout << ptr << endl;
   // char *ptr = &word;  
   // charcter arry me address operator ki need nhi hota hai 
    cout << *ptr<<endl;// 
    cout<<word<<endl;
    cout<<word[0]<<endl;

    return 0;
}