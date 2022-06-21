#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

int main() {
   
   string word;
   string word2;
   int wordodd;
   getline(cin, word);
   
   int num;
   string first;
   string sec;
   word2 = word;
   while (word2.find(" ") != string::npos) {
      num = word2.find(" ");
      word2.replace(num, 1, "");
   }
   int last = word2.size()-1;
   int meet = word2.size()/2;
   //cout << "New text: " << word2<< endl;
   
   wordodd = word2.size()%2;
   //cout << wordodd << endl;
   
   for (int i=0; i < meet; i++){
      first.push_back(word2.at(i));
      //cout << "i: " << first << endl;
   }
   //cout<<endl;
   
   if (wordodd == 0){
      for (int j=last; j >= meet; j--){
         sec.push_back(word2.at(j));
         //cout << "j: " << sec << endl;
      }
   }
   else {
      for (int j=last; j > meet; j--){
         sec.push_back(word2.at(j));
         //cout << "j: " << sec << endl;
      }
   }
   
   if (first == sec){
      cout << "palindrome: " << word << endl;
   }
   else {
      cout << "not a palindrome: " << word << endl;
   }
}
