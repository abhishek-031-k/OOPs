#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    string engineType;
};

class Car : public Vehicle{
    int seats;
};

class Bike : public Vehicle{
   int gear;
};

int main(){
    Bike b1;
    Car c1;
    return 0;
}