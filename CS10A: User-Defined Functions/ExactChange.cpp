#include <iostream>
#include <vector> 
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals){
   if (userTotal == 0){
      cout << "no change" << endl;
   }
   if (userTotal > 100){
      coinVals.at(0) = userTotal / 100;
      userTotal = userTotal - (coinVals.at(0)*100);
      if(coinVals.at(0) == 1){
         cout << coinVals.at(0) << " dollar" << endl;
      }
      else{
         cout << coinVals.at(0) << " dollars" << endl;
      }
   }
   if (userTotal < 100 && userTotal >=25){
      coinVals.at(1) = userTotal / 25;
      userTotal = userTotal - (coinVals.at(1)*25);
      if(coinVals.at(1) == 1){
         cout << coinVals.at(1) << " quarter" << endl;
      }
      else{
         cout << coinVals.at(1) << " quarters" << endl;
      }
   }
   if (userTotal < 25 && userTotal >=10){
      coinVals.at(2) = userTotal / 10;
      userTotal = userTotal - (coinVals.at(2)*10);
      if(coinVals.at(2) == 1){
         cout << coinVals.at(2) << " dime" << endl;
      }
      else{
         cout << coinVals.at(2) << " dimes" << endl;
      }
   }
   if (userTotal < 10 && userTotal >=5){
      coinVals.at(3) = userTotal / 5;
      userTotal = userTotal - (coinVals.at(3)*5);
      if(coinVals.at(3) == 1){
         cout << coinVals.at(3) << " nickel" << endl;
      }
      else{
         cout << coinVals.at(3) << " nickels" << endl;
      }
   }
   if (userTotal < 5 && userTotal >=1){
      coinVals.at(4) = userTotal / 1;
      userTotal = userTotal - (coinVals.at(4)*1);
      if(coinVals.at(4) == 1){
         cout << coinVals.at(4) << " penny" << endl;
      }
      else{
         cout << coinVals.at(4) << " pennies" << endl;
      }
   }
}

int main() {
   int inputVal;
   vector<int> changeAmount(5); 
   changeAmount = {100,25,10,5,1};
   cin >> inputVal;
   ExactChange(inputVal, changeAmount);
   return 0;
}
