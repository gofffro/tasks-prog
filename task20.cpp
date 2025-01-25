#include <iostream>
#include <string>

using namespace std;

int main() {
    string telegramText;
    cout << "Введите текст телеграммы: ";
    getline(cin, telegramText);

    double costPerChar = 0.0;
    cout << "Введите стоимость за один символ: ";
    cin >> costPerChar;

    if (costPerChar < 0) {
        cout << "Стоимость за символ не может быть отрицательной" << endl;
        return 1;
    }

    int charCount = telegramText.length();
    double totalCost = charCount * costPerChar;

    cout << "Стоимость телеграммы: " << totalCost << " рублей" << endl;
}
