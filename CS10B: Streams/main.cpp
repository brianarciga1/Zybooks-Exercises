#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

// Place charCnt prototype (declaration) here
char charCnt(string str, char x);

int main() {
   string filename;
   char ch;
   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << "Enter a character: ";
   cin >> ch;
   
   cout << "# of " << ch << "'s: " << charCnt(filename, ch) << endl;
   
   return 0;
}

// Place charCnt implementation here
char charCnt(string str, char x){
   int sum = 0;
   char a;
   ifstream inFile;
   inFile.open(str.c_str());
   
   if (!inFile.is_open()) {
      return 1;
   }
   while (inFile.get(a)) {
      if(a == x){
         sum++;  
      }
   }
   inFile.close();
   return sum;
   
}