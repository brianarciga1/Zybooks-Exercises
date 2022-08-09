#include <iostream>
#include <string>
using namespace std;

void PrintMenu(){
   cout << "MENU" << endl;
   cout << "c - Number of non-whitespace characters" << endl;
   cout << "w - Number of words" << endl;
   cout << "f - Find text" << endl;
   cout << "r - Replace all !'s" << endl;
   cout << "s - Shorten spaces" << endl;
   cout << "q - Quit" << endl;
   cout << endl;
   cout << "Choose an option:" << endl;
}

int GetNumOfNonWSCharacters(string str){
   int num;
   while (str.find(" ") != string::npos){
      num = str.find(" ");
      str.replace(num, 1, "");
   }
   /* ALTERNATE
      for (i = 0; i < input.size(); ++i) {
      if (input.at(i) != ' ') {
         ++numChars;
      }
   }
   */
   return str.size();
}

int GetNumOfWords(string str){
   int num = 1;
   for(int i=0; i < str.size()-1; i++){
      if(str.at(i) != ' ' && str.at(i+1) == ' '){
         num++;
      }
   }
   return num;
}

int FindText(string str, string word){
   int match = 0;
   int found = 0;
   int j = 0;
   
   for (int i=0; i < str.size(); i++){
     if (str.at(i) == word.at(j)){
        match++;
        if (match == word.size()){
           found++;
           j = 0;
         }
         j++;
      }
      else {
         match = 0;
         j = 0;
      }
   }
   return found;
}

string ReplaceExclamation(string& str){
   for (int i=0; i < str.size(); i++){
      if (str.at(i) == '!'){
         str.at(i) = '.';
      }
   }
   return str;
}

void ShortenSpace(string& str){
   string yea;
   for (int i=0; i < str.size(); i++){
      if ((str.at(i) == ' ') && (str.at(i+1) == ' ')){
         continue;
      }
      else {
         yea.push_back(str.at(i));
      }
   }
   str = yea;
}

int ExecuteMenu(string str){
   char option;
   
   while (option != 'q'){
      PrintMenu();
      cin >> option;
   
      if (option == 'q'){
         break;
      }
      else if (option == 'c'){
         cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(str) << endl << endl;
      }
      else if (option == 'w'){
         cout << "Number of words: " << GetNumOfWords(str) << endl << endl;
      }
      else if (option == 'f'){
         string word;
         cin.ignore();
         cout << "Enter a word or phrase to be found:" << endl;
         getline(cin,word);
         cout << "\"" << word << "\" instances: " << FindText(str,word) << endl << endl;
      }
      else if (option == 'r'){
        cout << "Edited text: " << ReplaceExclamation(str) << endl << endl; 
      }
      else if (option == 's'){
         ShortenSpace(str);
         cout << "Edited text: " << str << endl << endl; 
      }
   }
}

int main() {
   string str;
   cout << "Enter a sample text:" << endl;
   getline(cin, str);
   cout << endl;
   cout << "You entered: " << str << endl;
   cout << endl;
   ExecuteMenu(str);
   return 0;
}
