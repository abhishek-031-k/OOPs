#include <bits/stdc++.h>
using namespace std;

class Teacher{
    private: 
     double salary;

    public:
    // properties
    string name;
    string dept;
    string subject;

    //non - parametrized costructor
    Teacher(){
       dept = "Computer Science";
    }
   //parametrized constructor
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // methods/ member function
    void changeDept(string newDept){
        dept = newDept;
    }
    
 void getInfo(){
    cout<<"name: "<<name<<endl;
    cout<<"subject: "<<subject<<endl;
  }
};


int main(){

    Teacher t1; // consturctor call automatically when obejct is created
    Teacher t2("abhishek kumar","computer science", "c++", 2000000);
    t2.getInfo();
    return 0;
}