#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
   public:
      void SetDurationAndName(int songDuration, string songName) { //function inside of Song
         duration = songDuration; //set to Song's private member(duration)
         name = songName; //set to Song's private member(name)
      }
      void PrintSong() const { //simple print function
         cout << duration << " - " << name << endl;
      }
      int GetDuration() const { return duration; } //only returns duration
      string GetName() const { return name; } //only returns name

   private:
      int duration;
      string name; //Song's private name
};

class Album {
   public:
      void SetName(string albumName) { name = albumName; } //function sets Album's private name
      void InputSongs(); 
      void PrintName() const { cout << name << endl; } //function prints name after updating
      void PrintSongsShorterThan(int songDuration) const; // it'll print songs short than, in this case, 120 (see main)

   private:
      string name;
      vector<Song> albumSongs; //private vector of type "Song", meaning it can use duration and name from "Song" (private variables)
};

void Album::InputSongs() {
   Song currSong; // calling "Song" class so you can use its stuff
   int currDuration;
   string currName;

   cin >> currDuration;
   while (currDuration >=  0) {
      getline(cin, currName);
      currSong.SetDurationAndName(currDuration, currName); // sets current duration and name for "Song"
      albumSongs.push_back(currSong); // can use "Album" private variables because it is in the same class BUT the variables are from "Song"
      cin >> currDuration;
   }
}

void Album::PrintSongsShorterThan(int songDuration) const {
   unsigned int i;
   Song currSong;

   cout << "Songs shorter than " << songDuration << " seconds:" << endl; 

  for(i=0; i < albumSongs.size(); i++) {
      currSong = albumSongs.at(i); // here you can set it to currSong because we want to use "Song's" private variables
      if(currSong.GetDuration() < songDuration) {
        currSong.PrintSong();
      }
  }

}

int main() {
   Album musicAlbum;
   string albumName;

   getline(cin, albumName);
   musicAlbum.SetName(albumName);
   musicAlbum.InputSongs();
   musicAlbum.PrintName();
   musicAlbum.PrintSongsShorterThan(210);

   return 0;
}
