#include<bits/stdc++.h>
using namespace std;

class student{
public:
string name;
double* cgpaptr;

student(string name, double cgpa){
    this->name = name;
   cgpaptr = new double;
   *cgpaptr = cgpa;
}


student(student &obj){
    this->name = obj.name;
    cgpaptr = new double;
    *cgpaptr = *obj.cgpaptr;
}

void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaptr<<endl;
}
};


int main(){

   student s1("xyz", 8.00);
   student s2(s1);
  
   s1.getInfo();
   *(s2.cgpaptr) = 9.2;
   s1.getInfo();
   s2.getInfo();
    return 0;
}