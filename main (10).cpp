#include <iostream>
#include <vector>
using namespace std;

int main() {
  int totalPlayer = 5;
  vector<int> jerseyNums(totalPlayer);
  vector<int> ratingNums(totalPlayer);
  // int playerJerseyNum;
  // int playerRatingNum;
  int value;
  char option;

  for (int i = 0; i < jerseyNums.size(); ++i) {
    cout << "Enter player " << (i + 1) << "'s jersey number:";
    cin >> jerseyNums.at(i);

    cout << "Enter player " << (i + 1) << "'s rating:";
    cin >> ratingNums.at(i);
  }
  cout << "Roster" << endl;
  for (int i = 0; i < jerseyNums.size(); ++i) {
    cout << "player " << (i + 1) << "-- "<< "--Jersey Number: " << jerseyNums.at(i) << ", "<< "Rating: " << ratingNums.at(i) << endl;
  }

  do {
    cout << "Menu" << endl;
    cout << "a - Add player" << endl;
    cout << "d - Remove player" << endl;
    cout << "u - Update player Rating" << endl;
    cout << "r - Output players above rating" << endl;
    cout << "o - Output roster" << endl;
    cout << "q - Quit" << endl << endl;
    cout << "Choose an option: " << endl;
    cin >> option;
  } while (option != 'q');
  cout << "Bye!";

  if (option == 'a') {
    cout << "Enter a new player's jersey number:";
    cin >> value;
    jerseyNums.push_back(value);
    cout << "Enter player's rating number: ";
    cin >> value;
    ratingNums.push_back(value);
    for (int i = 0; i < jerseyNums.size(); ++i) {
      cout << "player " << (i + 1) << "-- "<< "--Jersey Number: " << jerseyNums.at(i) << ", " << "Rating: " << ratingNums.at(i) << endl;
    }  
  }

  if (option == 'd') {
    cout << "Enter a jersey number: ";

    cin >> value;

  for (int i = 0; i < jerseyNums.size(); i++) {

      if (jerseyNums.at(i) == value) {

        jerseyNums.erase(jerseyNums.begin() + i);

        ratingNums.erase(ratingNums.begin() + i);
      }
    }
  }
  if (option == 'u') {
    cout << "Enter player's jersey number:";
    cin >> value;
    cout << "Enter a new rating for player: ";
    cin >> value;
    jerseyNums.at(value) = jerseyNums.at(value + 1);
    ratingNums.at(value) = ratingNums.at(value + 1);
    return 0;
  }

  if (option == 'r') {
    cout << "Enter a rating for player:";
    cin >> value;
    for (int i = 0; i < ratingNums.size(); i++) {
      if (ratingNums[i] > value) {
        cout << ratingNums.at(i) << endl;
      }
    }
    if (option == 'o') {
      for (int i = 0; i < jerseyNums.size(); ++i) {
        cout << "player " << (i + 1) << "-- "
             << "--Jersey Number: " << jerseyNums.at(i) << ", "
             << "Rating: " << ratingNums.at(i) << endl;
      }
    }
  }
}