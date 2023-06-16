#include <iostream>
#include <string>
using namespace std;

class Restaurant {
   public:
      Restaurant(); // Declared here
      void SetName(string restaurantName);
      void SetRating(int userRating);
      void Print();
   private:
      string name;
      int rating;
};

Restaurant::Restaurant() {  // Default constructor
   name = "NoName";         // Default name: NoName indicates name was not set (honestly same as doing it in private)
   rating = -1;             // Default rating: -1 indicates rating was not set
}

void Restaurant::SetName(string restaurantName) {
   name = restaurantName;
}

void Restaurant::SetRating(int userRating) {
   rating = userRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant favLunchPlace;  // Automatically calls the default constructor

   favLunchPlace.Print();

   favLunchPlace.SetName("Central Deli");
   favLunchPlace.SetRating(4);
   favLunchPlace.Print();

   return 0;
}
