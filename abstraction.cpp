#include<bits/stdc++.h>
using namespace std;

class Shape{//abstract class
    virtual void draw() = 0;//pure virtual function
};

class Circle: public Shape{
public:
void draw(){
    cout<<"drawing a circle"<<endl;
}
};

int main(){
    Circle c;
    c.draw();
    return 0;
}