#include <iostream>
using namespace std;
#include <vector>
int main() {
  // assigning the value
  int randomNumber = 0; 
  srand(time(NULL));
  int choice;
  int count;
  char input;
do { 
  // assigning the variable
  count = 10;
   srand(time(NULL));
  randomNumber = rand() % 50 + 1;
  cout << randomNumber << endl;
  do {

    cout << " Enter a number from 1-50 " << endl;
    cin >> choice;

    if (choice > randomNumber) {
      cout << " Try again , make it Lower !!!! " << endl;
    } else if (choice > randomNumber) {
      cout << "try again, make it higher !!!! " << endl;
    } else
      cout << "Congrats!!! " << endl;
// asking the player if they want to play again.
  } while (choice != randomNumber && count > 0);
if (choice != randomNumber) {
  cout << "Sorry you have run out of guesses!!!" << endl;
    }
   cout << "Would you like to play again? (Y/N)";
    cin >> input;
} while (input == 'Y');
}
