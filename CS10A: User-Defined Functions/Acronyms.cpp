#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CreateAcronym(string userPhrase){
   string a;
   for (int i=0; i<userPhrase.size(); i++){
      if (isupper(userPhrase.at(i))){
         a = a + userPhrase.at(i);
      }
   }
   return a;
}

int main() {
   string userPhrase;
   getline(cin,userPhrase);
   cout << CreateAcronym(userPhrase)<< endl;
   return 0;
}
