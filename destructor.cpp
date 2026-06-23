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

~student(){
cout<<"I am the destructor"<<endl;
delete cgpaptr;
}


void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"cgpa: "<<*cgpaptr<<endl;
}
};


int main(){

   student s1("xyz", 8.00);
   s1.getInfo();
    return 0;
}