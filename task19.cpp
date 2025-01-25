#include <iostream>

using namespace std;

int main() {
    int year = 0;
    cout << "Введите год: ";
    cin >> year;

    if (year <= 0) {
        cout << "Год должен быть натуральным числом" << endl;
        return 1;
    }

    bool isLeapYear = false;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        } 
        else {
            isLeapYear = true;
        }
    }

    if (isLeapYear) {
        cout << year << " является високосным годом" << endl;
    } 
    else {
        cout << year << " не является високосным годом" << endl;
    }
}
