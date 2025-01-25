#include <iostream>

using namespace std;

void replaceDiagonalElements(int rows, int cols, int matrix[rows][cols], int newValue) {
    for (int rowsMatrix = 0; rowsMatrix < rows && rowsMatrix < cols; ++rowsMatrix) {
        matrix[rowsMatrix][rowsMatrix] = newValue;
    }
}

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

    int newValue;
    cout << "Введите новое значение для элементов на главной диагонали: ";
    cin >> newValue;

    replaceDiagonalElements(rows, cols, matrix, newValue);

    cout << "Матрица после замены элементов на главной диагонали:" << endl;
    for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
        for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
            cout << matrix[rowsMatrix][colsMatrix] << " ";
        }
        cout << endl;
    }
}
