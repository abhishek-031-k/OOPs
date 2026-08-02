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
};

class faculty : public person{}; 

class TA : public student, public faculty{};

int main(){
    TA t1;
}