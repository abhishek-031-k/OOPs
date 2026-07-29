#include<bits/stdc++.h>
using namespace std;

class student{
    private: 
     string name;
     public:
     string getName(){
        return name;
     }

     void setName(string newName){
        name = newName;
        cout<<"name is set"<<endl;
     }
};

int main(){
    student s1;
    s1.setName("abhishek");
    cout<<s1.getName()<<endl;
    return 0;
}