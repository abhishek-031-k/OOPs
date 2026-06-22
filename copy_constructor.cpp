#include<bits/stdc++.h>
using namespace std;

class teacher{
  public: 
  string name;
  string subject;
  string language;
  int salary;

  teacher( string name, string subject, string language, int salary){
     this->name = name;
     this->subject = subject;
     this->language = language;
     this->salary;
  }
  void getInfo(){
    cout<<"name: " <<name<<endl;
    cout<<"subject: "<<subject<<endl;
  }
  teacher(teacher &obj){
    cout<<"I am custom copy constructor"<<endl;
   this->name = obj.name;
   this->subject = obj.subject;
   this->language = obj.language;
   this->salary = obj.salary;
  }
};


int main(){

    teacher t1("abhishek", "computerScience", "c++", 10000000);
    teacher t2(t1);
    t2.getInfo();
    return 0;
}