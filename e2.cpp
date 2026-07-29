#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a vehicle"<<endl;
    }
};

class Car : public Vehicle{
    public:
Car(){
    cout<<"This Vehicle is a Car"<<endl;
}
};

int main(){
    Car c1;

    return 0;
}