#include <iostream>
#include <vector>
#include <string>
using namespace std;

int FindWordInWordList(vector<string> wordList, string wordToFind){
   for (int i=0; i< wordList.size(); i++){
      if(wordToFind == wordList.at(i)){
         return i;
      }
   }
   return -1;
}

int main() {
   int wordnum;
   int sentnum;
   int index;
   string o;
   string n;
   string w;
   cin >> wordnum;
   vector<string> original(wordnum);
   vector<string> newword(wordnum);
   for (int i=0; i< original.size(); i++){
      cin >> o;
      original.at(i) = o;
      cin >> n;
      newword.at(i) = n;
   }
   cin >> sentnum;
   vector<string> sentence(sentnum);
   for (int j=0; j< sentence.size(); j++){
      cin >> w;
      sentence.at(j) = w;
   }
   
   for (int i=0; i< original.size(); i++){
      index = FindWordInWordList(sentence, original.at(i));
      while (index != -1){
      for (int j=0; j < original.size(); j++){
         if(original.at(j) == sentence.at(index)){
            sentence.at(index) = newword.at(j);
         }
      }
      index = FindWordInWordList(sentence, original.at(i));
      }
   }
   for (int j=0; j< sentence.size(); j++){
      cout << sentence.at(j) << " ";
   }
   cout << endl;
   return 0;
}
