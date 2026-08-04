#include<bits/stdc++.h>
using namespace std;

  class base{
   public:
    virtual void display(){
        cout<<"base class"<<endl;
    }
  };

  class derived : public base{
     public:
         void display() override{
            cout<<"derived class"<<endl;
         }
  };

int main(){
    base* baseptr;
    derived derivedobj;
    baseptr = &derivedobj;
    baseptr->display();
    return 0;
}