#include <iostream>
#include <vector>
using namespace std;

string GetPhoneNumber(vector<string> nameVec, vector<string> phoneNumberVec, string contactName){
   for(int j=0; j < nameVec.size(); j++){
      if(nameVec.at(j) == contactName){
         return phoneNumberVec.at(j);
      }
   }
}

int main() {
   int num;
   string name;
   string contactName;
   string phone;
   cin >> num;
   vector<string> nameVec(num);
   vector<string> phoneNumberVec(num);
   for(int i=0; i < nameVec.size(); i++){
      cin >> name;
      nameVec.at(i) = name;
      cin >> phone;
      phoneNumberVec.at(i) = phone;
   }
   cin >> contactName;
   cout << GetPhoneNumber(nameVec, phoneNumberVec, contactName) << endl;
   return 0;
}
