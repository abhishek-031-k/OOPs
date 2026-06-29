#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;
    int rollno;
};

class teacher{
    public:
    string subject;
    double salary;
};

class TA : public teacher, public student{
};


int main(){
  TA t1;
  t1.name = "xyz";
  t1.subject = "abc";
  cout<<t1.name<<endl;
  cout<<t1.subject<<endl;
  
    return 0;
}