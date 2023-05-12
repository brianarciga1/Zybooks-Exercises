#include <iostream>
#include <vector>
#include <climits>

using namespace std;

//Fills vector with user input until user enters 0 (does not include 0 within vector).
void fillVector(vector<int> &v){
    int a = 0;
    while(1){
        cin >> a;
        if(a == 0){
            break;
        }
        v.push_back(a);
        
    }
}

//Searches for val within vector.
//If val found, returns index of first instance of val.
//If val not found, returns UINT_MAX (constant provided by the climits library).
unsigned search(const vector<int> &v, int val){
    for(unsigned i=0; i < v.size(); i++){
        if(v.at(i) == val){
            return i;
        }
    }
    return UINT_MAX;
}

//Removes from the vector the value at index, keeping all other values in the same relative order.
void remove(vector<int> &v, unsigned index){
    v.erase(v.begin()+index);
}

//Displays all values within vector, each value separated by a space.
void display(const vector<int> &v){
    for(unsigned i=0; i < v.size(); i++){
        cout << v.at(i) << " ";
    }
}

int main()
{
   vector<int> v;
   int value;
   
   fillVector(v);
   
   cout << "Enter value to search for: ";
   cin >> value;
   
   //search for value
   unsigned pos = search(v, value);
   
   cout << "Found: ";
   
   //if val found, output position it was found and then remove it from vector
   //otherwise output "NOT FOUND"
   //UINT_MAX is a constant provided by the climits library (see http://www.cplusplus.com/reference/climits/ for more info)
   if (pos != UINT_MAX)
   {
      cout << pos << endl;
      remove(v, pos);
   }
   else
   {
      cout << "NOT FOUND" << endl;
   }
   
   cout << "Result: ";
   //output the vector's values.
   display(v);
   cout << endl;
   
   return 0;
}
