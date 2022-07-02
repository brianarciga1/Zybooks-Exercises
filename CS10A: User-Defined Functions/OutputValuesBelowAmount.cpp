#include <iostream>
#include <vector> 
using namespace std;

void GetUserValues(vector<int>& userValues, int numValues){
   int user;
   for(int i=0; i < numValues; i++){
      cin >> user;
      userValues.push_back(user);
   }
}

void IntsLessThanOrEqualToThreshold(vector<int> userValues, int upperThreshold, vector<int>& resValues){
   for (int j=0; j < userValues.size(); j++){
      if(userValues.at(j) <= upperThreshold){
         resValues.push_back(userValues.at(j));
      }
   }
}

int main() {
   vector<int> userValues; 
   vector<int> resValues; 
   int upperThreshold;
   int numValues;
   unsigned int i;
   
   cin >> numValues;
   GetUserValues(userValues, numValues);

   cin >> upperThreshold;
   IntsLessThanOrEqualToThreshold(userValues, upperThreshold, resValues);
   for (i = 0; i < resValues.size(); ++i) {
      cout << resValues.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}
