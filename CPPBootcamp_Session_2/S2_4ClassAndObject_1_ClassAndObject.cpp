#include<iostream>
using namespace std;
class Employee{
    //Acess Specifier
    public : 
    //Member Variables Declaration
    int id;
    string name;
    //Member Function
    void displayDetails(){
        cout<<"Id : "<<id<<" Name : "<<name;
    }
};
int main(){
    Employee emp1;
    emp1.id = 1;
    emp1.name = "Employee 1";
    emp1.displayDetails();
    return 0;
}