#include<iostream>
using namespace std ;
class complex{
    public :
    int r  ;
    int img;
    complex(int a,int v){
        r=a;
        img=v;
    }
    complex(){
        r=0;
        img=0;
    }
    complex operator +(complex c){
        complex g;
        g.r=r+c.r;// pahla oprant already known 
        g.img=img +c.img;// ek oprand ke sath dusre ka jorne ka relation 
        return g;

    }

};
int main () {
complex c1(5,6) ,c2(45,15), c3;
c3=c1+c2;
cout<<c3.r<<" + i"<<c3.img<<endl;
cout<<"hell";
return 0 ;
}