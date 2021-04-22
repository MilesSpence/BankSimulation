/*   Name: Miles Spence
     Program Description: This is the header file for the Customer. 
     It creates the Customer class with its #define statements, public function prototypes/signatures, and private data members. 
     This file will be included by the Customer cpp file.
*/
#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <string>
using namespace std;

class Customer {
   
   public:
      //This is a default constructor for the customer
      Customer();
      //This is a constructor made to recieve input via parameters. The three parameters being the name of the customer and the time they arrive and the service time.
      Customer(string customerName, int arrivalTime, int serviceTime);
      //This is a constructor for recieving just a line of input in the form "name x y" where x and y are arrival time and service time respectively.
      Customer(string line);
      
      //This changes the name of the customer to the string input, but this like all the setters ended up not being used
      void SetName(string customerName);
      //This changed the arrival time of the customer.
      void SetArrival(int arrivalTime);
      //This changes the service time of the customer, which is the amount of minutes it will take for the customer to be helped by the teller.
      void SetService(int serviceTime);
      
      //This function returns the name of the customer. It was a very useful function like all the getters.
      string GetName() const;
      //This function returns the arrival time of the customer.
      int GetArrivalTime() const;
      //This function returns the service time of the customer.
      int GetServiceTime() const;
      
      //This is a void function that prints all of the contents of the customer in a very plain way with nothing but blanks between the name, arrival time, and the service time.
      void PrintCustomer();
      
   private:
      //This is the private field of the string name to be edited by the Customer.cpp file.
      string name;
      //This is the arrival time private field that dictates when the customer arrives to the bank.
      int arrival;
      //This is the service time that determines the number of minutes to be served at the bank.
      int service;
};
#endif
