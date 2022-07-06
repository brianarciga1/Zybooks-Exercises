#include <iostream>
#include <string>
using namespace std;

int GetNumOfCharacters(const string usrStr) {
   int cnt = 0;
   for(int i=0; i< usrStr.size(); i++){
      cnt++;
   }
   return cnt;
}

int main() {
   string usrStr;
   int num;
   cout << "Enter a sentence or phrase:" << endl;
   getline(cin, usrStr);
   cout << endl;
   cout << "You entered: " << usrStr << endl;
   cout << endl;
   cout << "Number of characters: " << GetNumOfCharacters(usrStr) << endl;
   while (usrStr.find(" ") != string::npos){
      num = usrStr.find(" ");
      usrStr.replace(num, 1, "");
   }
   cout << "String with no whitespace: " << usrStr << endl;
   return 0;
}
