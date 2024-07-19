#include <iostream>
#include <string>
using namespace std;
// Function to encrypt plaintext using Vigenère cipher
string vigenereEncrypt(const string &plaintext, const string &key) {
  string encryptedText = "";
  int keyLength = key.length();
  int textLength = plaintext.length();
  for (int i = 0; i < textLength; i++) {
    char currentChar = plaintext[i];
    char keyChar = key[i % keyLength];

    if (isalpha(currentChar)) {
      // Convert both characters to uppercase for simplicity
      currentChar = toupper(currentChar);
      keyChar = toupper(keyChar);

      // Apply Vigenère cipher formula
      char encryptedChar = ((currentChar + keyChar) % 26) + 'A';
      encryptedText += encryptedChar;
    } else {
      // If the character is not alphabetic, leave it unchanged
      encryptedText += currentChar;
    }
  }
  return encryptedText;
}
int main() {
  string plaintext;
  string key;
  cout << "Enter the plaintext: ";
  getline(cin, plaintext);
  cout << "Enter the key: ";
  cin >> key;
  string encryptedText = vigenereEncrypt(plaintext, key);
  cout << "Encrypted text: " << encryptedText << endl;
  return 0;
}
