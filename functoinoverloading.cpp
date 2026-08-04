#include<bits/stdc++.h>
using namespace std;

 class Add{
    public:

   void addition(int a, int b){
       cout<<"integer sum : "<< a + b<<endl;
   }

   void addition(double a, double b){
    cout<<"float sum : "<<a + b<<endl;
   }

 };

int main(){
    Add a1;
    a1.addition(2, 3);
    Add a2;
    a2.addition(2.5, 3.0);
    return 0;
}