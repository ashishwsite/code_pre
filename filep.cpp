#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int s=125;
    string name;
    ofstream out("file3.txt");
    out<<s;
    ifstream data("ram.txt");
    data>>name;
    cout<<name;
    getline(data,name);
    cout<<name;
     getline(data,name);
    cout<<name;
    //in.close();
    out.close();
    return 0 ;
}