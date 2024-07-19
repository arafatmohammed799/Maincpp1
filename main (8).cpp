#include <array>
#include <cmath>
#include <ctype.h>
#include <iostream>
#include <vector>
using namespace std;

char playerGuess(int x);

int main() {

  char input;

  do {
    int plus = 0;
    vector<string> wordList = {"monkey", "panda", "fish", "elephant",
                               "bird",   "dog",   "cat", "snake", "alligator", "tiger"};
    string word;
    vector<char> status;
    srand(time(NULL));
    int find;

    int random = rand() % 10;
    word = wordList.at(random);

    // char input;
    char letter;
    char proveLetter;

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
      find = word.find(letter);

      for (int j = 0; j < word.size(); j++) {
        status.push_back('-');
        cout << status.at(j) << " ";
      }

      if (word.find(letter) == string::npos) {
        for (int l = 0; l < status.size(); l++) {
          plus++;
          cout << status.at(l);
        }
        cout << endl;
        cout << letter << " not found\n";
      } else {
        for (int m = 0; m < word.length(); m++) {
          if (word.at(m) == letter) {
            status.at(m) = letter;
          }
        }
        cout << letter << endl;
      }

      while (letter < 'a' || letter > 'z' || cin.good() == false) {
        cout << "That's incorrect input. Please try again\n";
        cin >> letter;
      }

      cin.clear();
      cin.ignore();

      if(plus != word.size()) {
        cout << "Sorry, you've ran out of tries!\n";
      } else {
        cout << "Congratulations!\n";
      }
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
