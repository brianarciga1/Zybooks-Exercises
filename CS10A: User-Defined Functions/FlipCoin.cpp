#include <iostream>
#include <cstdlib>
using namespace std;

string HeadsOrTails(){
   if (rand()%2 == 0){ //%2 gives you 0 or 1
      return "heads";
   }
   else{
      return "tails";
   }
}
int main() {
   int num;
   srand(2);  // Unique seed
   cin >> num;
   for (int i=0; i<num; i++){
      cout << HeadsOrTails() << endl;
   }
   return 0;
}
