

#include <string>
#include <iostream>
#include "person.h"
using namespace std;

// string Person::getFirstName() {
//     return firstName;
// }
    Person::Person(string fName, string lName, float rate, float hours){
        firstName = fName;
        lastName = lName;
        payRate = rate;
        hoursWorked = hours;
    }

    Person::Person(){
        lastName = "";
        firstName = "";
        payRate = 0.0;
        hoursWorked = 0.0;
        
    }

    void Person::setLastName(string lName){
        lastName = lName;
    }

    string Person::getLastName(){

        return lastName;
    }

    void Person::setFirstName(string fName){
        firstName = fName;
    }

    string Person::getFirstName(){

        return firstName;
    }

    void Person::setPayRate(float rate){
        payRate = rate;
    }
    float Person::getPayRate(){

        return payRate;
    }
    void Person::setHoursWorked(float hours){
        hoursWorked = hours;
    }
    float Person::getHoursWorked(){

        return hoursWorked;
    }
    float Person::totalPay(){

        return hoursWorked * payRate;
    }
    string Person::fullName(){

        return firstName + " " + lastName;
    }
