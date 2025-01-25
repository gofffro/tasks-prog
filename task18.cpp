#include <iostream>

using namespace std;

int main() {
    int N = 0;
    cout << "Введите количество этажей в небоскребе: ";
    cin >> N;

    if (N < 0) {
        cout << "Неправильное количество этажей" << endl;
        return 1;
    }

    int M = 0;
    cout << "Введите номер квартиры: ";
    cin >> M;

    if (M < 1 || M > N * 3) {
        cout << "Неправильный номер квартиры" << endl;
        return 1;
    }

    int floor = (M - 1) / 3 + 1;

    if (floor % 2 == 0) {
        floor -= 1;
    }

    cout << "Лифт должен доставить пассажира на этаж: " << floor << endl;
}
