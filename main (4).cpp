#include <iomanip>
#include <iostream>
using namespace std;

double promptInput(int studentNo);
char getLetterGrade(double percentScore);

int main() {
  // Declaration of eight variables of double datatype to hold scores for eight
  // students.
  int studentNo;

  double studentScore[100];
  char studentLetterGrade[100];


  double percent[100];
  double sum = 0;
  double avg;

  cout << "Please enter a number of students (1-100): ";
  cin >> studentNo;
  // cout << studentNo;

  for (int i = 1; i <= studentNo; i++) {
    studentScore[i] = promptInput(i);
  }

  for (int i = 1; i <= studentNo; i++) {
    studentLetterGrade[i] = getLetterGrade(studentScore[i] * 2 / 3);
  }

  for (int i = 1; i <= studentNo; i++) {
    percent[i] = (studentScore[i] * 2 / 3);
  }

  for (int i = 1; i <= studentNo; i++) {
    sum += studentScore[i];
  }

  avg = sum / 12;
  
  cout << "Work submitted by Mohammed Arafat\n";
  cout << "*****************************************" << endl;
  cout << left;
  cout << setprecision(5);
  cout << setw(15) << "Student" << setw(8) << "Score" << setw(12)
       << "Percentage"
       << "Grade\n";
  cout << "*****************************************" << endl;
  for (int i = 1; i <= studentNo; i++) {

    cout << setw(15) << i << setw(8) << studentScore[i] << setw(12)
         << percent[i] << studentLetterGrade[i] << endl;
  }

  cout << "*****************************************" << endl;

  cout << "Sum score of all students is " << sum << endl;
  cout << "Average score of all students is " << avg << endl;
  return 0;
}

double promptInput(int studentNo) {
  double score;
  bool check;
  do {
    cout << "Please enter a score for student" << studentNo << ": ";
    cin >> score;
    if (cin.good() == false || (score < 0 || score > 150)) {
      cout << "This is an invalid score. Try again" << endl;
      cin.clear();
      cin.ignore(10000, '\n'); // cin.ignore(INT_MAX, '\n');
      check = false;
    } else {
      check = true;
    }
  } while (!check); // or while (check==false);
  return score;
}

char getLetterGrade(double percentScore) {
  if (percentScore > 89.99) {
    return 'A';
  } else if (percentScore > 79.99) {
    return 'B';
  } else if (percentScore > 69.99) {
    return 'C';
  } else if (percentScore > 59.99) {
    return 'D';
  } else {
    return 'F';
  }
}
