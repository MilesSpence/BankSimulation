/*  Name Miles Spence
    Program Description: This is the cpp file for the Customer header file. It creates the constructors, data structures, and actually defines what each function/method does.
    The functions are made up of code which are algorithms and variables to solve problems.
    A Customer is a name, arrival time, and time to be serviced. In addition, there are getter and setters for all of those parameters.
*/ 
#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "Customer.h"
using namespace std;

Customer::Customer() {
    name = "NONE";
    arrival = 0;
    service = 0;
}
Customer::Customer(string customerName, int arrivalTime, int serviceTime) {
    name = customerName;
    arrival = arrivalTime;
    service = serviceTime;
}
Customer::Customer(string line) {
    //get name
    line.append(" ");
    name = line.substr(0, line.find(" "));
    line.erase(line.begin(), line.begin() + line.find(" ")+1);
    
    //get arrival
    string s = line.substr(0, line.find(" "));
    //cout << s << endl;
    string minutes = s;
    string hour = s;
    int aTime;
    if(s.length() == 3) {
        minutes.erase(minutes.begin(), minutes.begin() + 1);
        hour.erase(hour.begin() + 1, hour.end());
        aTime = atoi(minutes.c_str());
        int hours = atoi(hour.c_str());
        aTime += (hours*60);
    } else {
        minutes.erase(minutes.begin(), minutes.begin() + 2);
        hour.erase(hour.begin() + 2, hour.end());
        aTime = atoi(minutes.c_str());
        int hours = atoi(hour.c_str());
        aTime += (hours*60);
    }
    arrival = aTime;
    
    //get service
    line.erase(line.begin(), line.begin() + line.find(" ")+1);
    s = line.substr(0, line.find(" "));
    service = atoi(s.c_str());
}
void Customer::SetName(string customerName) {
    name = customerName;
}
void Customer::SetArrival(int arrivalTime) {
    arrival = arrivalTime;
}
void Customer::SetService(int serviceTime) {
    service = serviceTime;
}
string Customer::GetName() const {
    return name;
}
int Customer::GetArrivalTime() const {
    return arrival;
}
int Customer::GetServiceTime() const {
    return service;
}
void Customer::PrintCustomer() {
    cout << name << " " << arrival << " " << service << endl;
}
#endif
