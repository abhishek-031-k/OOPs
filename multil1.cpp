#include<bits/stdc++.h>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(){
        cout<<"person constructor is called"<<endl;
    }
};

class student : public person{
    public:
    int rollNo;
    student(){
        cout<<"student constructor is called"<<endl;
    }
};

class TA : public student{
  public:
  int salary;
  TA(){
    cout<<"TA constructor is called"<<endl;
  }
};

int main(){
    TA t1;
    return 0;
}