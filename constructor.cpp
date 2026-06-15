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
   

    // methods/ member function
    void changeDept(string newDept){
        dept = newDept;
    }
    
  //setter - to set value of private properites
    void setSalary(double s){
        salary = s;
    }
 //getter - to get value of private properties
    double getSalary(){
      return salary;
    }
};


int main(){

    Teacher t1;
    t1.name = "abhishek";
    t1.subject = "c++";
    t1.dept = "computer Science";
    t1.setSalary(20000);
cout<<t1.getSalary();
    return 0;
}