#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int age;
    string name;

    Student(int age, string name){
        this->age = age;
        this->name = name;
        cout<<"constructor is called"<<endl;
    }
    ~Student(){
        cout<<"Deconstructor is called"<<endl;
    }
};


int main(){
    Student s1(23, "abhishek");
    return 0;
}