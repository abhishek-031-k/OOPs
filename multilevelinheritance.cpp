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

class Gradstudent : public student{
    public:
    string researchArea;
};


int main(){
  Gradstudent s1;
  s1.name = "abhishek";
  s1.researchArea = "qunatum physics";
  cout<<s1.name<<endl;
  cout<<s1.researchArea <<endl;
    return 0;
}