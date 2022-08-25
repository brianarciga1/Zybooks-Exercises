#include <iostream>
using namespace std;

void ConvHrMin(int timeVal, int& hrVal, int& minVal) { // the "int&" passes it by reference. It updates the values usrHr and usrMin
   hrVal = timeVal / 60;
   minVal = timeVal % 60;
}

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime;
 
   ConvHrMin(totTime, usrHr, usrMin); // takes in values for totTime, usrHr, usrMin and passes them to ConvHrMin
 
   cout << "Equals: ";
   cout << usrHr << " hrs "; // prints value from ConvHrMin
   cout << usrMin << " min" << endl; // prints value from ConvHrMin

   return 0;
}
