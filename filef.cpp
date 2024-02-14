#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> ran={5,6,7,4};
     int s=sizeof(ran);// it give size with multiplay its primarliy
     cout<<s<<"----";
     int si=ran.size();//it give actual diffine size 
     cout<<si;
     cout<<"element at 3nd index" <<ran.at(3);
     cout<<"check empty ness "<<ran.empty();

    return 0;
}
