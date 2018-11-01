#include <iostream>

using namespace std;
// Title:   Assignment II - Task 2 - Problem 8
//purpose:know the number of gallons that consumed while a driven miles
class odometer{
private:


    int mile;
    int fuel_gallon;
    float gas_gallon;
public:
    odometer()            //declaring a default constructor with initial values equal zero
    {
        mile=0;
        fuel_gallon=0;
    }
    //function name: set fuel()
    //purpose:set gasoline fuel per mile
    void setfuel(){
        cout<<" Enter the gasoline fuel per mile"<<endl;
        cin>>fuel_gallon;
    }
    //function name: set mile()
    //purpose:set miles that driven per mile
    void setmile(){
        cout<<"Enter miles that driven "<<endl;
        cin>>mile;
    }
     //function name: calcgallon()
    //purpose:set calculate gas gallon that consumed while driven miles
    void calcgallon(){
        gas_gallon=mile*fuel_gallon;
    }
    //function name:printgas_gallon()
    //purpose:set print gas gallons that consumed while driven miles
    void printgas_gallon(){
        cout<<"the number of gallons that consumed = "<<gas_gallon<<endl;
    }

};

int main()
{
    odometer o1;   //declaring an object of class odometer
    o1.setmile();
    o1.setfuel();
    o1.calcgallon();
    o1.printgas_gallon();
    return 0;
}
