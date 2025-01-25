#include <iostream>
#include <cmath>

using namespace std;

bool isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double sideA, sideB, sideC;
    cout << "Введите длину стороны a: ";
    cin >> sideA;
    cout << "Введите длину стороны b: ";
    cin >> sideB;
    cout << "Введите длину стороны c: ";
    cin >> sideC;

    if (sideA <= 0 || sideB <= 0 || sideC <= 0) {
        cout << "Все стороны должны быть положительными" << endl;
        return 1;
    }

    if (isTriangle(sideA, sideB, sideC)) {
        double area = calculateArea(sideA, sideB, sideC);
        cout << "Площадь треугольника: " << area << endl;
    } 
    else {
        cout << "Числа не могут быть длинами сторон треугольника" << endl;
    }
}
