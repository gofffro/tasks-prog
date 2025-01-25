#include <iostream>

using namespace std;

int main() {
    int rows = 0, cols = 0;
    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;

    if (rows < 0 || cols < 0) {
        cout << "Неправильные размеры матрицы" << endl;
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

    cout << "Суммы чисел в каждой строке матрицы:" << endl;
    for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
        int rowSum = 0;
        for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
            rowSum += matrix[rowsMatrix][colsMatrix];
        }
        cout << "Сумма элементов в строке " << rowsMatrix + 1 << ": " << rowSum << endl;
    }
}
