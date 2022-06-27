#include <iostream>
using namespace std;

string RemoveNonAlpha(string userString){
   string txt;
   for(int i=0; i<userString.size(); i++){
      if(isalpha(userString.at(i))){
         txt = txt + userString.at(i);
      }
   }
   return txt;
}

int main() {
   string userString;
   getline(cin, userString);
   cout << RemoveNonAlpha(userString) << endl;
   return 0;
}
