#include <iostream>
#include <vector>
using namespace std;

class Player {
public:
  Player(){
    rating = -1;
    jerseyNum = - 1;
  }
  void setRating(int rate){rating = rate;}
  void setJersey(int jersey) {jerseyNum = jersey;}
  int getRating() {return rating;}
  int getJersey() {return jerseyNum;}

private: 
  int rating;
  int jerseyNum;
};

int main() {
  vector<Player> team;
  
   vector<int> jerseyNums(5);
   vector<int> ratingNums(5);
   
   unsigned int i;
   int playerJersy;
   int playerRating;
   char menuOp;
   
   for (i = 0; i < jerseyNums.size(); ++i) {
      cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
      cin >> playerJersy;
      jerseyNums.at(i) = playerJersy;
      
      cout << "Enter player " << i + 1 << "'s rating:" << endl;
      cin >> playerRating;
      ratingNums.at(i) = playerRating;
      cout << endl;
   }
   
   cout << "ROSTER" << endl;
   for (i = 0; i < jerseyNums.size(); ++i) {
      cout << "Player " << i + 1 << " -- Jersey number: " 
          << jerseyNums.at(i) << ", Rating: " << ratingNums.at(i) << endl;
   }
   cout << endl;
   
   do {
      cout << "MENU" << endl;
      cout << "a - Add player" << endl;
      cout << "d - Remove player" << endl;
      cout << "u - Update player rating" << endl;
      cout << "r - Output players above a rating" << endl;
      cout << "o - Output roster" << endl;
      cout << "q - Quit" << endl << endl;
      
      cout << "Choose an option:" << endl;
      cin >> menuOp;
      
      //Add
      if (menuOp == 'a') {
         cout << "Enter a new player's jersey number:" << endl;
         cin >> playerJersy;
         jerseyNums.push_back(playerJersy);
         
         
         cout << "Enter the player's rating:" << endl;
         cin >> playerRating;
         ratingNums.push_back(playerRating);
         cout << endl;
      }
      
      //Delete
      else if (menuOp == 'd') { 
         cout << "Enter a jersey number:" << endl;
         cin >> playerJersy;
      
         for (i = 0; i < jerseyNums.size(); ++i) {
            if (playerJersy == jerseyNums.at(i)) { 
               playerJersy = i;
            }
         }
         
         for (i = 0; i < jerseyNums.size() - 1; ++i) {
            if (i >= playerJersy) {
               jerseyNums.at(i) = jerseyNums.at(i + 1);
               ratingNums.at(i) = ratingNums.at(i + 1);
            }
         }
         jerseyNums.pop_back();
         ratingNums.pop_back();
         cout << endl;
      }
      
      //Update
      else if (menuOp == 'u') {
         cout << "Enter a jersey number:" << endl;
         cin >> playerJersy;

         cout << "Enter a new rating for player:" << endl;
         cin >> playerRating;
         
         for (i = 0; i < jerseyNums.size(); ++i) {
            if (jerseyNums.at(i) == playerJersy) {
               ratingNums.at(i) = playerRating;
            }
         }
         cout << endl;      
      }
      
      // > Rating
      else if (menuOp == 'r') {
         cout << "Enter a rating:" << endl;
         cin >> playerRating;
         cout << endl;
         
         cout << "ABOVE " << playerRating << endl;
         for (i = 0; i < jerseyNums.size(); ++i) {
            if (ratingNums.at(i) > playerRating) {
               cout << "Player " << i + 1 << " -- Jersey number: " 
                   << jerseyNums.at(i) << ", Rating: " 
                   << ratingNums.at(i) << endl; 
            }
         }
         cout << endl;

      }
      
      else if (menuOp == 'o') {
         cout << "ROSTER" << endl;
         for (i = 0; i < jerseyNums.size(); ++i) {
            cout << "Player " << i + 1 << " -- Jersey number: " 
                << jerseyNums.at(i) << ", Rating: " 
                << ratingNums.at(i) << endl;
         }
         cout << endl;
      }
      
   } while(menuOp != 'q');
   
   return 0;
}