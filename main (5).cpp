#include <cmath>
#include <ctype.h>
#include <iostream>
#include <vector>
using namespace std;

// char playerGuess(int x);
// int playerSelect(int y);

int main() {
  char input;
  char letter;
  int randomIndex;
  vector<string> wordList = {"monkey",   "rabbit",   "panda", "tiger",
                             "bear",     "scorpion", "hawk",  "fish",
                             "elephant", "penguin"};
  srand(time(NULL));
  randomIndex = rand() % 10;
  randomIndex = rand()%wordList.size();
  vector<char> showStatus;
  string word;
  word = wordList.at(randomIndex);
  cout << "Welcome Message Here!!!" << endl;
  do {

    cout << "Welcome to Group 4!\nINTRODUCING!! -- Rajheem kiem, Mohammed "
            "Arafat, Xingjian Liao, Tania Nasrin, Christian Salvador.\n\n";

    int y;
    int player_count;
    cout << "Enter a number of play(1-3): ";
    cin >> y;
    player_count = 0;

    while (y < 1 || y > 3) {
      cout << "Incorrect player number please. Please try again!\n";
      cout << "Enter a number of play(1-3): ";
      cin >> y;
    }

    for (int i = player_count; i < 10; i++) {
      cout << "Player No " << player_count++ % y + 1 << endl;

      cout << "Guess(a-z): ";
      cin >> letter;
      while (letter < 'a' || letter > 'z' || cin.good() == false) {
        cout << "That's incorrect input. Please try again" << endl;
        cin >> letter;
      }

      cin.clear();
      cin.ignore();
    }
    cout << endl;

    cout << "Would you like to play again? (Y/N) " << endl;
    cin >> input;

  } while (input == 'Y' || input == 'y');
  cout << "Thanks for playing!";
}

char playerGuess(int x) {
  int player_count = 0;
  char letter;
  for (x = 0; x < 10; x++) {
    cout << "Guess(a-z): ";
    cin >> letter;
    if (islower(letter)) { // will display output.
    } else {
      cout << "That's incorrect input. Please try again\n";
    }
  }
  return letter;
}

// int playerSelect(int y) {

//   cout << "Enter a number of play(1-3): ";
//   cin >> y;

//   while (y < 1 || y > 3) {
//     cout << "Incorrect player number please. Please try again!\n";
//     cout << "Enter a number of play(1-3): ";
//     cin >> y;
//   }
//   return y;
// }
// if (islower(letter)) { // will display output.
// } else {
//   cout << "That's incorrect input. Please try again\n";
// }