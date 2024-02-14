#include<iostream>
#include<fstream>


using namespace std;

int main(){
    string st = "Harry bhai";
    string st1;
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out<<st;
    out<<"i am coder";
    ifstream in("sample6.txt");
    in>>st1;
    cout<<st1;

    return 0;
}
