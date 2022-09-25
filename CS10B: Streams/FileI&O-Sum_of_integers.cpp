#include <fstream>
#include <iostream>
#include <cstdlib> //needed for exit function
using namespace std;

// Place fileSum prototype (declaration) here
int fileSum(string str);

int main() {
   string filename;
   cout << "Enter the name of the input file: ";
   cin >> filename;
   if (fileSum(filename) == 1){
      cout << "Error opening " << filename << endl;
   }
   else {
      cout << "Sum: " << fileSum(filename) << endl;
   }
   return 0;
}

// Place fileSum implementation here
int fileSum(string str) {
   int sum = 0;
   int x = 0;
   ifstream inFile;
   inFile.open(str.c_str());
   
   if (!inFile.is_open()) {
      return 1;
   }
   while (inFile >> x) {
      sum += x;  
   }
   inFile.close();
   return sum;
}
