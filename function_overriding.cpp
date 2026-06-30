#include<bits/stdc++.h>
using namespace std;

class parent{
public:

void getInfo(){
    cout<<"parent class"<<endl;
}
};
 class Child : public parent{
   public:
   void getInfo(){
    cout<<"child class"<<endl;
   }
 };

int main(){
    Child c1;
    parent p1;
    c1.getInfo();
    p1.getInfo();
    return 0;
}