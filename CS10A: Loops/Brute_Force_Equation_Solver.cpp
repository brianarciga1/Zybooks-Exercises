#include <iostream>
using namespace std;

int main() {
   
   int arr[3];
   int arr2[3];
   int solution;
   int solution2;
   int cnt;
   
   for (int i=0; i<3; i++){
      cin >> arr[i];
      //cout << arr[i] << endl;
   }
   //cout<<endl;
   for (int j=0; j<3; j++){
      cin >> arr2[j];
      //cout << arr2[j] << endl;
   }
   
   for(int x=-10; x < 10; x++){
      for (int y=-10; y < 10; y++){
      solution = (arr[0]*x) + (arr[1]*y);
      solution2 = (arr2[0]*x) + (arr2[1]*y);
      
         if (solution == arr[2] && solution2 == arr2[2]){
            cout << "x = " << x << ", y = " << y << endl;
            cnt++;
            break;
         }
      }
   }
   if (cnt == 0) {
   cout << "There is no solution" << endl;
   }
   return 0;
}
