#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
 int* rollNo;

 Student(int n){
  rollNo = new int;
  *rollNo = n;
  cout<<*rollNo<<endl;
 }
 ~Student(){
 delete rollNo;
 cout<<"Destructor: memory deallocation"<<endl;
 }
};


int main(){
    Student s1(100);
    s1.~Student();
    return 0;
}