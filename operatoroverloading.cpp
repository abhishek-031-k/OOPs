#include<bits/stdc++.h>
using namespace std;

  class Complex{
    public:
    int real;
    int imaginary;

    Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator+(const Complex& obj){
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    Complex operator-(const Complex& obj){
        return Complex(real - obj.real, imaginary - obj.imaginary);
    }

  };

int main(){
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;

    Complex c4(20, 37), c5(4, 5);
    Complex c6 = c4 - c5;
    cout<<c3.real<<"+"<<c3.imaginary<<"i"<<endl;
    cout<<c6.real<<"+"<<c6.imaginary<<"i"<<endl;
    return 0;
}