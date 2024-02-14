#include<iostream>
using namespace std ;
// exception and file handling operation using try ,throw and catch statment 
int main () {
  try{
    int age;
    cin>>age;
    cout<<"the age is above 18 year "<<endl;
    throw(age);
  }
  catch(int age){
    cout<<" the ahe is smaller than 18 year "<<endl;
  }

return 0 ;
}