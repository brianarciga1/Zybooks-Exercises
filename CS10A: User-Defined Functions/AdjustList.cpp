#include <iostream>
#include <vector> 
using namespace std;

int GetMinimumInt(vector<int> listInts){
   int min;
   if(listInts.at(0) > listInts.at(1)){
      min = listInts.at(1);
   }
   else{
      min = listInts.at(0);
   }
   for(int i=0; i < listInts.size(); i++){
      if(min > listInts.at(i)){
         min = listInts.at(i);
      }
   }
   return min;
}

int main() {
   int size;
   int nums;
   int min;
   cin >> size;
   vector<int> listInts(size);

   for (int i=0; i < listInts.size(); i++){
      cin >> nums;
      listInts.at(i) = nums;
   }

   min = GetMinimumInt(listInts);

   for (int j=0; j < listInts.size(); j++){
      cout << listInts.at(j) - min << " ";
   }
   cout << endl;
   return 0;
}
