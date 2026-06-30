#include<bits/stdc++.h>
using namespace std;

class parent{
public:

void getInfo(){
    cout<<"parent class"<<endl;
}

virtual void hello(){
    cout<<"hello from parent"<<endl;
}

};
 class Child : public parent{
   public:
   void getInfo(){
    cout<<"child class"<<endl;
   }

   void hello(){
    cout<<"hello from child"<<endl;
}

 };

int main(){
    Child c1;
   c1.hello();
    return 0;
}