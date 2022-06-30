#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec){
   int tempVal;
   int check = 1; //checks if all the values have been flipped. If check is 1 it'll keep checking
   while(check == 1){
      check = 0;
      for(unsigned int i=0; i< myVec.size()-1; ++i){
         if(myVec.at(i) > myVec.at(i+1)){
            swap(myVec.at(i), myVec.at(i+1));
            check = 1;
         }
      }
   }
}

int main() {
   int size;
   
   cin >> size;
   vector<int> myVec(size);
   for(int i=0; i< size; ++i){
      cin >> myVec.at(i);
   }
   
   SortVector(myVec);
   for(unsigned int i=0; i< myVec.size(); ++i){
      cout << myVec.at(i) << " ";
   }
   cout << endl;
   return 0;
}
