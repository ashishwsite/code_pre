#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
public:
    int real,img;
    ComplexNumbers(int a,int b){
        real=a;
        img=b;
        }
    void plus(ComplexNumbers & c){
        this->real=this->real+ c.real;
        this->img=this->img+c.img;
    }
    void multiply(ComplexNumbers & d){
         int r=(this->real*d.real)- (this->img*d.img) ;
        this->img=(this->real * d.img) + (this->img * d.real);   
        this->real=r;
    }
    void print(){
        cout<<real<<" + i"<<img;

    }
    
            
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }
}