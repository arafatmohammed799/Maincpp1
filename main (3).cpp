#include <cmath>
#include <iostream>
using namespace std;
int main() {

//1. Declare 8 variable of Data types
double studentOne, studentTwo, studentThree, studentFour, studentFive,studentSix, studentSeven, studentEight, student, score, scoreOne, scoreTwo, scoreThree, scoreFour, scoreFive, scoreSix, scoreSeven, scoreEight,percentage, grade,sum, average, percentageOne, percentageTwo, percentageThree, percentageFour, percentageFive, percentageSix, percentageSeven, percentageEight;

//2. Declare 8 variable of Char  
char gradestudentOne, gradestudentTwo, gradestudentThree, gradestudentFour, gradestudentFive, gradestudentSix, gradestudentSeven, gradestudentEight, letterGradeOne, letterGradeTwo, letterGradeThree, letterGradeFour, letterGradeFive,letterGradeSix, letterGradeSeven, letterGradeEight;
//3. Assignment.
studentOne   = 140.50;
studentTwo   = studentOne / 2;
studentThree = studentOne - 20;
studentFour  = studentOne / 3;
studentFive  = studentFour + 100;
studentSix   = studentTwo + studentFour;
studentSeven = studentSix + 15;
studentEight = 150;

percentageOne   = 93.6667;
percentageTwo   = 46.8333;
percentageThree = 80.3333;
percentageFour  = 31.2222;
percentageFive  = 97.8889;
percentageSix   = 78.0556;
percentageSeven = 88.0556;
percentageEight = 100;
  


//4. Assignment part 2.
gradestudentOne   =  'A';
gradestudentTwo   =  'F';
gradestudentThree =  'B';
gradestudentFour  =  'F';
gradestudentFive  =  'A';
gradestudentSix   =  'C';
gradestudentSeven =  'B';
gradestudentEight =  'A';  

//Conditional statement Part 1.
cout << "Please enter a Score One : ";
cin >> scoreOne;
if (scoreOne > 150 || scoreOne < 0) {
cout << "This is an invalid score. Try again" ;
return 0;
} 
cout << "Please Enter a score Student Two: ";
cin >> scoreTwo;
if (scoreTwo > 150 || scoreTwo < 0) {
cout << "This is an invalid score. Try again" ;
return 0;
}
cout << "Please Enter a score Student Three: ";
cin >> scoreThree;
if (scoreThree > 150 || scoreThree < 0) {
cout << "This is an invalid score. Try again"<< endl; 
return 0;
}
cout << "Please Enter a score Student Four: ";
cin >> scoreFour;
if (scoreFour > 150 || scoreFour < 0) {
cout << "This is an invalid score. Try again"<< endl; 
return 0;
}

cout << "Please Enter a score Student Five: ";
cin >> scoreFive;
if (scoreFive > 150 || scoreFive < 0) {
cout << "This is an invalid score. Try again"<< endl;
return 0;
}
cout << "Please Enter a score Student Six: ";
cin >> scoreSix;
if (scoreSix > 150 || scoreSix < 0) {
cout << "This is an invalid score. Try again"<< endl; 
return 0;
}

cout << "Please Enter a score Student Seven: ";
cin >> scoreSeven;
if (scoreSeven > 150 || scoreSeven < 0) {
cout << "This is an invalid score. Try again"<< endl; 
return 0;
}
cout << "Please Enter a score Student Eight: ";
cin >> scoreEight;
if (scoreEight > 150 || scoreEight < 0) {
cout << "This is an invalid score. Try again"<< endl; 
return 0;  
}



//Conditional statement part 2. Declare 8 variable of Char  



  
if (percentageOne >= 90) {
  
cout << 'A';
}
else if (percentageOne < 90 && percentageOne >= 80) {
cout << 'B'; 
}
else if (percentageOne < 80 && percentageOne >= 70 ) {
cout << 'C';
}  
else if (percentageOne < 70 && percentageOne >= 60){
cout << 'D';
}
else if (percentageOne < 60 ) {
cout << 'F' ;
}  
  
  
if (percentageTwo >= 90) {
letterGradeTwo = 'A'; 
}
else if (percentageTwo < 90 || percentageTwo >= 80) {
letterGradeTwo = 'B'; 
}
else if (percentageTwo < 80 || percentageTwo >= 70 ) {
letterGradeTwo = 'C';
}  
else if (percentageTwo < 70 || percentageTwo >= 60){
letterGradeTwo = 'D';
}
else if (percentageTwo < 60 ) {
letterGradeTwo = 'F' ;
}  


if (percentageThree >= 90) {
letterGradeThree = 'A'; 
}
else if (percentageThree < 90 || percentageThree >= 80) {
letterGradeThree = 'B'; 
}
else if (percentageThree < 80 || percentageThree >= 70 ) {
letterGradeThree = 'C';
}  
else if (percentageThree < 70 || percentageThree >= 60){
letterGradeThree = 'D';
}
else if (percentageThree < 60 ) {
letterGradeThree = 'F' ;
}  


if (percentageFour >= 90) {
letterGradeFour = 'A'; 
}
else if (percentageFour < 90 || percentageFour >= 80) {
letterGradeFour = 'B'; 
}
else if (percentageFour < 80 || percentageFour >= 70 ) {
letterGradeFour = 'C';
}  
else if (percentageFour < 70 || percentageFour >= 60){
letterGradeFour = 'D';
}
else if (percentageFour < 60 ) {
letterGradeFour = 'F' ;
}  


if (percentageFive >= 90) {
letterGradeFive = 'A'; 
}
else if (percentageFive < 90 || percentageFive >= 80) {
letterGradeFive = 'B'; 
}
else if (percentageFive < 80 || percentageFive >= 70 ) {
letterGradeFive = 'C';
}  
else if (percentageFive < 70 || percentageFive >= 60){
letterGradeFive = 'D';
}
else if (percentageFive < 60 ) {
letterGradeFive = 'F' ;
}  


 if (percentageSix >= 90) {
letterGradeSix = 'A'; 
}
else if (percentageSix < 90 || percentageSix >= 80) {
letterGradeSix = 'B'; 
}
else if (percentageSix < 80 || percentageSix >= 70 ) {
letterGradeSix = 'C';
}  
else if (percentageSix < 70 || percentageSix >= 60){
letterGradeSix = 'D';
}
else if (percentageSix < 60 ) {
letterGradeSix = 'F' ;
}   

  
  
if (percentageSeven >= 90) {
letterGradeSeven = 'A'; 
}
else if (percentageSeven < 90 || percentageSeven >= 80) {
letterGradeSeven = 'B'; 
}
else if (percentageSeven < 80 || percentageSeven >= 70 ) {
letterGradeSeven = 'C';
}  
else if (percentageSeven < 70 || percentageSeven >= 60){
letterGradeSeven = 'D';
}
else if (percentageSeven < 60 ) {
letterGradeSeven = 'F' ;
}    
  
  
if (percentageEight >= 90) {
letterGradeEight = 'A'; 
}
else if (percentageEight < 90 || percentageEight >= 80) {
letterGradeEight = 'B'; 
}
else if (percentageEight < 80 || percentageEight >= 70 ) {
letterGradeEight = 'C';
}  
else if (percentageEight < 70 || percentageEight >= 60){
letterGradeEight = 'D';
}
else if (percentageEight < 60 ) {
letterGradeEight = 'F' ;
}  
  
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
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  }

