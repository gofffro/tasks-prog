#include <iostream>

using namespace std;

int main() {
  int number = 0;
  int count = 0;
  cout << "Введите натуральное число: ";
  cin >> number;

  if (number <= 0) {
    cout << "Введенное число не является натуральным!" << endl;
    return 1;
  }
  for (int digit = 1; digit <= number; ++digit) {
      if (number % digit == 0) {
          count += 1;
      }
  }
  if (count == 2) {
      cout << "Число простое!" << endl;
  }
  else {
      cout << "Число не простое!" << endl;
  }
}
