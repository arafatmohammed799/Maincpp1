#include <cmath>
#include <iostream>
using namespace std;
int main() {
//1. Declare 8 variable of Data types
double studentOne, studentTwo, studentThree, studentFour, studentFive,studentSix, studentSeven, studentEight, student, score, 
percentage, grade,sum, average;
//2. Declare 8 variable of Char  
char gradestudentOne, gradestudentTwo, gradestudentThree, gradestudentFour, gradestudentFive, gradestudentSix,       
gradestudentSeven, gradestudentEight;
//3. Assignment.
studentOne   = 140.50;
studentTwo   = studentOne / 2;
studentThree = studentOne - 20;
studentFour  = studentOne / 3;
studentFive  = studentFour + 100;
studentSix   = studentTwo + studentFour;
studentSeven = studentSix + 15;
studentEight = 150;
//4. Assignment part 2.
gradestudentOne   =  'A';
gradestudentTwo   =  'F';
gradestudentThree =  'B';
gradestudentFour  =  'F';
gradestudentFive  =  'A';
gradestudentSix   =  'C';
gradestudentSeven =  'B';
gradestudentEight =  'A';

sum = (studentOne + studentTwo + studentThree + studentFour + studentFive + studentSix + studentSeven + studentEight);

average = (studentOne + studentTwo + studentThree + studentFour + studentFive + studentSix + studentSeven + studentEight) / 8;
  
cout << "Work submitted by Mohammed Arafat" << endl;

cout << "*********************************************" << endl;

cout << "Student\t\t\tScore\t\tPercentage\tGrade" << endl;
cout << "*********************************************" << endl;  
cout << "studentOne   " << "   " << studentOne   << "       "   << (studentOne   * 2) / 3 << "       "    << gradestudentOne   << endl;
cout << "studentTwo   " << "   " << studentTwo   << "       "   << (studentTwo   * 2) / 3 << "       "    << gradestudentTwo   << endl;
cout << "studentThree " << "   " << studentThree << "       "   << (studentThree * 2) / 3 << "       "    << gradestudentThree << endl;
cout << "studentFour  " << "   " << studentFour  << "     "     << (studentFour  * 2) / 3 << "       "    << gradestudentFour  << endl;
cout << "studentFive  " << "   " << studentFive  << "     "     << (studentFive  * 2) / 3 << "       "    << gradestudentFive  << endl;
cout << "studentSix   " << "   " << studentSix   << "     "     << (studentSix   * 2) / 3 << "       "    << gradestudentSix   << endl;
cout << "studentSeven " << "   " << studentSeven << "     "     << (studentSeven * 2) / 3 << "       "    << gradestudentSeven << endl;
cout << "studentEight " << "   " << studentEight << "         " << (studentEight * 2) / 3 << "           "<< gradestudentEight << endl;
cout << "*********************************************" << endl;
cout << "Sum score of all student is "     << sum << endl;
cout << "Average score of all student is " << average << endl;

return 0;


  
}