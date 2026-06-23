#include<bits/stdc++.h>
using namespace std;

class person{
    public: 
    string name;
    int age;   
};

class student : public person{
    public:
    int rollno;
};

class teacher : public person{
    public:
    string subject;
    double salary;
};


int main(){
  student s1;
  s1.name = "abhishek";
  s1.age = 20;
  s1.rollno = 2312031;
  teacher t1;
  t1.name = "abhishek";
  t1.age = 40;
  t1.subject = "physics";
  t1.salary = 2000000;
  cout<<s1.age<<" "<<s1.name<<" " <<s1.rollno<<endl;
  cout<<t1.age<<" " <<t1.name<<" "<<t1.subject<<" "<<t1.salary<<endl;
    return 0;
}