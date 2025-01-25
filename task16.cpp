#include <iostream>

using namespace std;

int main() {
    int rows = 0, cols = 0;
    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    if (rows < 0 || cols < 0) {
        cout << "Некорректные размеры матрицы!" << endl;
        return 1;
    }

    int matrix[rows][cols];
    cout << "Введите элементы матрицы:" << endl;
    for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
        for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
            cout << "Элемент(" << rowsMatrix + 1 << "," << colsMatrix + 1 << "): ";
            cin >> matrix[rowsMatrix][colsMatrix];
        }
    }

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int rowsMatrix = 0; rowsMatrix < rows && rowsMatrix < cols; ++rowsMatrix) {
        mainDiagonalSum += matrix[rowsMatrix][rowsMatrix];
    }

    for (int rowsMatrix = 0; rowsMatrix < rows && rowsMatrix < cols; ++rowsMatrix) {
        secondaryDiagonalSum += matrix[rowsMatrix][cols - rowsMatrix - 1];
    }

    cout << "Сумма чисел на главной диагонали: " << mainDiagonalSum << endl;
    cout << "Сумма чисел на побочной диагонали: " << secondaryDiagonalSum << endl;
}
