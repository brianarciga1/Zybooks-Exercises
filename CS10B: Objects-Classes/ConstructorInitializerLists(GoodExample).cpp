#include <iostream>
#include <vector>
using namespace std;

class SampleClass {
   public:
      SampleClass();
      void Print() const;

   private:
      vector<int> itemList;
      int a; // extra variable I added
      string b; // extra variable I added
};

SampleClass::SampleClass() : itemList(2), a(3), b("example") {
   // itemList gets constructed with size 2
  // a gets constructed with size 3
  // b gets constructed with size "example"
}

void SampleClass::Print() const {
   cout << "Size: " << itemList.size() << endl;
   cout << "Item1: " << itemList.at(0) << endl;
   cout << "Item2: " << itemList.at(1) << endl;
}

int main() {
   SampleClass myClass;
   myClass.Print();
   return 0;
}
