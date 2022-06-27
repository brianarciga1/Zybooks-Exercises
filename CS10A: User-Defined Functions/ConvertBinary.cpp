#include <iostream>
using namespace std;

string IntToReverseBinary(int integerValue){
   string reverse;
   int out;

   while(integerValue > 0){
      out = integerValue % 2;
      if (out == 1){
         reverse = reverse + '1';
      }
      else{
         reverse = reverse + '0';
      }
      integerValue = integerValue / 2;
   }
   return reverse;
}

string StringReverse(string userString){
   string reverse;
   int lim = userString.size() - 1;
   for(int i=0; lim >= 0; lim--){
      reverse = reverse + userString.at(lim);
   }
   return reverse;
}

int main() {
   int num;
   string reverse;
   cin >> num;
   reverse = IntToReverseBinary(num);
   cout << StringReverse(reverse) << endl;
   return 0;
}
