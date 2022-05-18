//MLB_02.02_05_VehicleRentalSystem
//IT21214820
//Feedback class
#include <iostream>
#include <cstring>
using namespace std;

class Feedback{
  
private:
  int feedbackID;
  char fbDescription;
  char fbDate;

public:
  Feedback()
   {
     feedbackID = 0;
      strcpy(fbDescription, "");
      strcpy(fbDate, "");
   };
  
  void sendFeedback(int fbID, const char fbDescrip[100], const char Date[10]);
  
  void removeFeedback();
 
  void updateFeedback(int fbID, const char fbDescrip[100], const char Date[10]);
  
    ~Feedback()
  {
      cout << "Feedback " << feedbackID << " deleted " << endl;
  };
    
    
};