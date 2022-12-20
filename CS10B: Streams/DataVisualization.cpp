#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main() {

   string input;
   string column1, column2;
   string data;
   string data_str;
   vector<string> str;
   vector<string> _int;
   int comma = 0;
   string data_int;
   int digit_cnt = 0;
   
   cout << "Enter a title for the data:" << endl;
   getline(cin, input);
   cout << "You entered: " << input << endl << endl;
   
   cout << "Enter the column 1 header:" << endl;
   getline(cin, column1);
   cout << "You entered: " << column1 << endl << endl;
   cout << "Enter the column 2 header:" << endl;
   getline(cin, column2);
   cout << "You entered: " << column2 << endl << endl;
   
   while(1){
      cout << "Enter a data point (-1 to stop input):" << endl;
      getline(cin, data);
      
      if (data == "-1")
      break;
      
      for (int i=0; i < data.size(); i++){
         if (isalpha(data.at(i)) || data.at(i) == '.'){
            data_str = data_str + data.at(i);
         }
         if (data.at(i) == ' ' && isalpha(data.at(i+1))){
            data_str = data_str + data.at(i);
         }
         if (isdigit(data.at(i))){
            data_int = data_int + data.at(i);
            digit_cnt++;
         }
         if (data.at(i) == ','){
            comma++;
         }
      }
      if (comma == 0){
         cout << "Error: No comma in string." << endl << endl;
         data_str.clear();
         data.clear();
         data_int.clear();
         digit_cnt = 0;
      }
      else if (comma > 1){
         cout << "Error: Too many commas in input." << endl << endl;
         data_str.clear();
         data.clear();
         data_int.clear();
         comma = 0;
         digit_cnt = 0;
      }
      else if (digit_cnt == 0){
         cout << "Error: Comma not followed by an integer." << endl << endl;
         data_str.clear();
         data.clear();
         data_int.clear();
         comma = 0;
         digit_cnt = 0;
      }
      else {
         cout << "Data string: " << data_str << endl;
         str.push_back(data_str);
         data_str.clear();
         cout << "Data integer: " << data_int << endl << endl;
         _int.push_back(data_int);
         data.clear();
         data_int.clear();
         comma = 0;
         digit_cnt = 0;
      }
   }
   cout << endl;
   cout << right << setw(33) << input << endl;
   cout << left << setw(20) << column1 << "|" << right << setw(23) << column2 << endl;
   cout << "--------------------------------------------" << endl;
   for (int i=0; i< str.size(); i++){
      cout << left << setw(20) << str.at(i) << "|" << right << setw(23) << _int.at(i) << endl;
   }
   cout << endl;
   
   for (int i = 0; i < str.size(); i++){
      cout << right << setw(20) << str.at(i) << " ";
      stringstream scan(_int.at(i));
      int stars = 0;
      scan >> stars;
      for (int j = 0; j < stars; j++){
         cout << "*";
      }
      cout << endl;
   } 
}
