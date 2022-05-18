//MLB_02.02_05_VehicleRentalSystem
//IT21214820
//main program
//Including headerfiles of classes

#include "Accountant.h"
#include "Employee.h"
#include "User.h"
#include "Admin.h"
#include "Discount.h"
#include "Driver.h"
#include "Feedback.h"
#include "Payment.h"
#include "Report.h"
#include "Reservation.h"
#include "Vehicle.h"

#include<iostream>

using namespace std;

int main()
{
  //Creating dynamic objects of User class
  class User* U1 = new User();
  U1->addUserDetails("Ajith", 071420000, "Ajith@gmail.com","Colombo");
  delete U1;

  //Creating dynamic object of Employee class
  Employee* E1 = new Employee();
  E1->addEmployee("Sujith",012365405, "sujith@gmail.com", "Kegalle", 001, "Receptionist", "1615280423v");
  delete E1;

  //Creating dynamic object of Accountant class
  Accountant* Ac1 = new Accountant();
  Ac1->addAccountant("Kamal", 01236541, "Kamal@gmail.com", "Anuradhapura",101,"1212364v");
  delete Ac1;
  
  //Creating dynamic object of Admin class
  Admin* Ad1 = new Admin();
  Ad1->viewFeedback();
  delete Ad1;

  //Creating dynamic object of Driver class
  Driver* D1 = new Driver();
  D1->updatedriver(101,12645236);
  delete D1;

  //Creating dynamic object of Reservation class
  Reservation* Res1 = new Reservation();
  Res1->makeReservation(10235, "19 June 2022", "8.30am", "Colombo", "Cab no123 Ac", 2, 1);
  delete Res1;

  //Creating dynamic object of Payment class
  Payment* Pay1= new Payment();
  Pay1->makePayment(123, 45000.00, "Credit card");
  delete Pay1;

  //Creating dynamic object for Vehicle class
  Vehicle* V1 = new Vehicle();
  V1->addVehicleDetails("Car", "1234AC", "Black", 1500.00);
  delete V1;
  
  //Creating dynamic object for Report class
  Report* Rep1 = new Report();
  Rep1->genaratereport(321);
  delete Rep1;
  
  //Creating dynamic object for Feedback class
  Feedback* Fb1 = new Feedback();
  Fb1->sendFeedback(456, "Good service","16 February 2022");
  delete Fb1;
  
  return 0;   
}
