#include <iostream>
#include <vector>
using namespace std;
bool checkEvenOdd(int num);
int main() {
  // assigning the value
  int num;
  char input;
  int randomNumber = 0;
  int choice;
  int count;
  bool isEven;
  
  do {
    // assigning the variables.
    count = 0;
    srand(time(NULL));
    randomNumber = rand() % 50 + 1;

    cout << "The number is even number " << endl;
    // isEven = checkEvenOdd(randomNumber);
    if (isEven)
      cout << randomNumber << " is an even number ";
    else
      cout << randomNumber << " is an odd number ";
    cout << randomNumber << endl;

    do {
      cout << "Enter a number from 1-50" << endl;
      cin >> choice;

      count++;
      if (choice > randomNumber) {
        cout << "Try again - make it lower!!!" << endl;
      } else if (choice < randomNumber) {
        cout << "Try again - make it higher!!!" << endl;
      } else {
        cout << "Congrats!!! You Got in " << count << " Guesses !!" << endl;
      }
      // asking the player if they like to play again.
    } while (choice != randomNumber && count > 0);
    if (choice != randomNumber) {
      cout << "Sorry you have run out of guesses!!!" << endl;
    }
    cout << "Would you like to play again? (Y/N)";
    cin >> input;
  } while (input == 'Y');
}