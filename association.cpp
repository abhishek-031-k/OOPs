#include<bits/stdc++.h>
using namespace std;

 class student{
    public:
    string name;

    student(string name){
        this->name = name;
    }
 };

 class teacher{
    public:
    string name;
    vector<student*>students;

    teacher(string name){
     this->name = name;
    }
    void addstudent(student* s){
        students.push_back(s);
    }

   void print(){
    cout<<"teacher "<<name<<" has student: "<<endl;
    for( auto &it : students){
        cout<<" - "<<it->name<<endl;
    }
   }

 };

int main(){
    student abhishek("abhishek");
    student s2("s2");
    teacher t1("t1");
    t1.addstudent(&abhishek);
    t1.addstudent(&s2);
    t1.print();
    return 0;
}