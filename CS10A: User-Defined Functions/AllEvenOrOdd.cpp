#include <iostream>
#include <vector>
using namespace std;

bool IsVectorEven(vector<int> myVec){
   int even;
   int cnt = 0;
   
   for(int i=0; i< myVec.size(); i++){
      if(myVec.at(i) < 0){
         myVec.at(i) = myVec.at(i)*-1;
      }
      even = myVec.at(i) % 2;
      if (even == 0){
      cnt++;
      }
   }
   if (cnt == myVec.size()){
      return true;
   }
   else{
      return false;
   }
}

bool IsVectorOdd(vector<int> myVec){
   int odd;
   int cnt = 0;
   
   for(int i=0; i< myVec.size(); i++){
      if(myVec.at(i) < 0){
         myVec.at(i) = myVec.at(i)*-1;
      }
      odd = myVec.at(i) % 2;
      if (odd == 1){
      cnt++;
      }
   }
   if (cnt == myVec.size()){
      return true;
   }
   else{
      return false;
   }
}

int main() {
   int size;
   int list;
   
   cin >> size;
   vector<int> myVec(5);
   
   for(int i=0; i< myVec.size(); i++){
      cin >> list;
      myVec.at(i) = list;
   }
   
   int even = IsVectorEven(myVec);
   int odd = IsVectorOdd(myVec);
   
   if ((even == 1) && (odd == 0)){
      cout << "all even" << endl; 
   }
   else if ((even == 0) && (odd == 1)){
      cout << "all odd" << endl;
   }
   else {
      cout << "not even or odd" << endl;
   }
   return 0;
}
