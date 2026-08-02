#include<bits/stdc++.h>
using namespace std;

class base{
    public:
    int parent;
    base(){
        cout<<"base class constructor"<<endl;
    }
};

class derivedclass1 : virtual public base{
    public: 
    derivedclass1(){
        cout<<"derived_class1 constructor"<<endl;
    }
};

class derivedclass2 : virtual public base{
    public:
    derivedclass2(){
        cout<<"derived_class2 constructor"<<endl;
    }
};

class multipleclass : public derivedclass1, public derivedclass2{
    public:
    multipleclass(){
        cout<<"multipleclass constructor"<<endl;
    }
};

int main(){
    multipleclass m1;
    return 0;
}