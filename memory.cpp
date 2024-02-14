#include<iostream>
#include<string>
using namespace std;
// allocation of new memory using new keyword and in object and class 
class memory
{
    public:
    int id;
    string name;
    memory(int a,string s){
        this->id=a;
        name=s;
    }
    void display(){
        cout<<"id of student is "<<id<<endl;
        cout<<"name of student is "<<name<<endl;
    }
};
int main(){
   //creation of object using new keyword 
   memory * student=new memory(45,"ram");
   student->display();
    return 0;
}


