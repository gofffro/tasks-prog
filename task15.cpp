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

    cout << "Суммы отрицательных чисел в каждом столбце матрицы:" << endl;
    for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
        int colSum = 0;
        for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
            if (matrix[rowsMatrix][colsMatrix] < 0) {
                colSum += matrix[rowsMatrix][colsMatrix];
            }
        }
        cout << "Сумма отрицательных элементов в столбце " << colsMatrix + 1 << ": " << colSum << endl;
    }
}
