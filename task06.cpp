#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str) {
  istringstream stream(str);
  string word;
  int count = 0;

  while (stream >> word) {
    ++count;
  }

  return count;
}

int main() {
  string input;
  cout << "Введите строку: ";
  getline(cin, input);

  int wordCount = countWords(input);
  cout << "Количество слов в строке: " << wordCount << endl;
}
