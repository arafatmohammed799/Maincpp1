#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string name;
  int random;
  char userChoice, compChoice;
  char choices[3] = {'r', 'p', 's'};
  cout << " Welcome to Rock paper scissors game!!";
  cout << " Enter player name: ";
  cin >> name;
  cout << " seelect a choice" << endl;
  cout << "Rock (r), paper (p) ,scissors (s) : ";
  cin >> userChoice;

  srand(time(NULL));
  random = rand() % 3;
  cout << random << endl;

  compChoice = choices[random];

  cout << "User choice is " << userChoice << endl;
  cout << " Computer choice is " << compChoice << endl;
  if (userChoice == 'r') {
    if (compChoice == 's') {
      cout << name << " : You Loose !!!" << endl;

    } else {
      cout << name << " : Its a tie!!!!" << endl;
    }

  } else if (userChoice == 'p') {

  } else if (userChoice == 's') {
  } else {

    cout << "Invalid Input" << endl;
  }
}

// // welcome
// 2) Ask player for their name
// 3) prompt user for the choice
// 'r' = 'Rock'
// 'p' = paper
// 's' = seccers
// 3) randomize what comp should choose;
// 4) The result
// "you win "
