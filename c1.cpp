#include<bits/stdc++.h>
using namespace std;

class Questionpaper{
    public:
    int NumberofQues;
    string question;
    
   Questionpaper(){}

    Questionpaper(const Questionpaper& obj){
        this->NumberofQues = obj.NumberofQues;
   cout<<"user defined copy constructor is called"<<endl;
    }
};

int main(){
 Questionpaper physics;
 physics.NumberofQues = 10;
 cout<<physics.NumberofQues<<endl;
 Questionpaper chemistry(physics);
 cout<<chemistry.NumberofQues<<endl;
}