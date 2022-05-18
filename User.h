//MLB_02.02_05_VehicleRentalSystem
//IT21214820
//User class
#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "Reservation.h"
#include "Payment.h"
#include "Vehicle.h"

using namespace std;

class User  
{
  protected:
    char name[30];
    int contactNumber;
    char email[50];
    char adress[100];
    Reservation* res[5];
    Payment* pay[5];
    Vehicle* vehicle[5];
    Feedback* fb[5];

  public:
    User()
    {
      strcpy(name, "");
      contactNumber = 0;
      strcpy(email, "");
      strcpy(adress, "");
    };
  
  void addUserDetails(char uname[30], int ucontactNumber, char uemail[50],char adress[100]);
  
  void updateDetails(char uname[30], int ucontactNumber, char uemail[50],char adress[100]);

 
  ~User()
    {
      cout << "User " << name<< "deleted" <<endl;
    };
  
};