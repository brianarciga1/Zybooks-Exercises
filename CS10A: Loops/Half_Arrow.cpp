#include <iostream>
using namespace std;

int main() {
   int arrowBaseHeight;
   int arrowBaseWidth;
   int arrowHeadWidth;
   
   cout << "Enter arrow base height:" << endl;
   cin >> arrowBaseHeight;
   
   cout << "Enter arrow base width:" << endl;
   cin >> arrowBaseWidth;
   
   cout << "Enter arrow head width:" << endl;
   cin >> arrowHeadWidth;
   
   while (arrowHeadWidth <= arrowBaseWidth) {
      cout << "Enter arrow head width:" << endl;
      cin >> arrowHeadWidth;
   }

   cout << endl;
   for (int i=0; arrowBaseHeight > i; i++){
      for (int j=0; arrowBaseWidth > j; j++){
         cout << "*";
      }
      cout << endl;
   }
   
   for (int x=0; arrowHeadWidth >= x; arrowHeadWidth--){
      for (int y=1; arrowHeadWidth >= y; y++){
         cout << "*";
      }
      if(arrowHeadWidth ==0){
         break;
      }
      cout << endl;
   }
   
   return 0;
}
