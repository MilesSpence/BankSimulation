/*   Name: Miles Spence
     Program Description: This is the main file for the project. 
     It will be what actually runs the code and calls the functions/methods that have been created in the header and cpp files. 
     This is where input will be given from a file and outputted.
*/
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <fstream>
#include "Customer.h"
using namespace std;

int convertToMilitary(int input) {
    int hours = input/60;
    int minutes = input%60;
    hours = hours*100;
    return hours+minutes;
}

int main() {
    ifstream myfile;
    string line;
    myfile.open("line.txt");
    queue<Customer> customers;
    double numCusts = 0;
    if(myfile.is_open()) {
        while (getline (myfile,line)) {
            Customer temp(line);
            customers.push(temp);
            numCusts++;
        }
        myfile.close();
    } else {
        cout << "Error" << endl;
    }
    
    double avgTime = 0;
    double totalWaitTime = 0;
    
    queue<Customer> waiting; //queue of customers in line waiting
    
    bool available = true; //bool to tell whether the teller is free
    

    int timeNeeded; //the service time of the most recent customer
        
    int serving = 0; //amount of time the most recent customer has been served
    
    Customer beingServed; //customer being served by teller
    int i;
    for(i = 540; i < 1020; i ++) {
        Customer temp = customers.front();
        if(i == temp.GetArrivalTime()) {
            waiting.push(temp);
            customers.pop();
            cout << temp.GetName() << " got in line at " << convertToMilitary(i) <<  "." << endl;
        }
        if(available && !waiting.empty()) {
            beingServed = waiting.front();
            serving++;
            timeNeeded = beingServed.GetServiceTime();
            if(!waiting.empty()) {
                waiting.pop();
            }
            available = false;
        } else if (!available && serving == timeNeeded) {
            cout << beingServed.GetName() << " is done at " << convertToMilitary(i) << "." << endl;
            available = true;
            serving = 0;
            if(!waiting.empty()) {
                beingServed = waiting.front();
                serving++;
                timeNeeded = beingServed.GetServiceTime();
            if(!waiting.empty()) {
                waiting.pop();
            }
            available = false;   
            }
        } else if (!available) {
            serving++;
        }
        if(!waiting.empty() && !available) {
            for(int j = 0; j < waiting.size(); j++) {
                totalWaitTime++;
            }
        }
    }
    while(!waiting.empty() || !available) {
        if(available && !waiting.empty()) {
            beingServed = waiting.front();
            serving++;
            timeNeeded = beingServed.GetServiceTime();
            if(!waiting.empty()) {
                waiting.pop();
            }
            available = false;
        } else if (!available && serving == timeNeeded) {
            cout << beingServed.GetName() << " is done at " << convertToMilitary(i) << "." << endl;
            available = true;
            serving = 0;
        } else if (!available) {
            serving++;
        }
    if(!waiting.empty() && !available) {
        for(int j = 0; j < waiting.size(); j++) {
            totalWaitTime++;
        }
    }
            i++;
    }
    avgTime = totalWaitTime/numCusts;
    if(totalWaitTime == 0) {
        avgTime = 0;
    }
    cout << "Average wait time is " << avgTime << " minutes." << endl;
}
