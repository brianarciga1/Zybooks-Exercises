#include <iostream>
using namespace std;

bool IsLeapYear(int userYear){
   int four;
   int hundred;
   four = userYear % 4;
   hundred = userYear % 100;
   
   if(hundred == 0){
      hundred = userYear % 400;
      if(hundred > 0){
         return false;
      }
      else {
         return true;
      }
   }
   else{
      if(four == 0){
         return true;
      }
      else{
         return false;
      }  
   }
}

int main() {
   int yr;
   int val;
   cin >> yr;
   val = IsLeapYear(yr);
   if (val == 1){
      cout << yr << " is a leap year." << endl;
   }
   else {
      cout << yr << " is not a leap year." << endl;
   }
   return 0;
}
