#include <iostream>
#include <string>
using namespace std;

int main() {
   
   string input;

   string f;
   string s;
   int swtch = 0;
   int comma = 0;
   while(1){
      cout << "Enter input string:" << endl;
      getline(cin, input);
      
      if (input == "q")
         break;
         
      for (int i=0; i < input.size(); i++){
         if(input.at(i) == ' ' || input.at(i) == ','){
            swtch++;
            if (input.at(i) == ',')
            comma++;
         }
         else{
            if(swtch == 0){
               f = f+input.at(i);
            }
            else{
               s = s+input.at(i);
            }
         }
      }
      if (comma == 0){
         cout << "Error: No comma in string." << endl << endl;
      }
      else {
         cout << "First word: " << f << endl;
         cout << "Second word: " << s << endl << endl;\
         swtch = 0;
         f.clear();
         s.clear();
      }
   }
   return 0;
}
