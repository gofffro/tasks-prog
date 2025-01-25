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
  int maxElement = INT_MIN, minElement = INT_MAX;
  int maxRow = 0, maxCol = 0, minRow = 0, minCol = 0;

  cout << "Введите элементы матрицы:" << endl;
  for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
    for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
      cout << "Элемент(" << rowsMatrix + 1 << "," << colsMatrix + 1 << "): ";
      cin >> matrix[rowsMatrix][colsMatrix];

      if (matrix[rowsMatrix][colsMatrix] > maxElement) {
        maxElement = matrix[rowsMatrix][colsMatrix];
        maxRow = rowsMatrix;
        maxCol = colsMatrix;
      }

      if (matrix[rowsMatrix][colsMatrix] < minElement) {
        minElement = matrix[rowsMatrix][colsMatrix];
        minRow = rowsMatrix;
        minCol = colsMatrix;
      }
    }
  }

  swap(matrix[maxRow][maxCol], matrix[minRow][minCol]);

  cout << "Матрица после замены максимального и минимального элементов:" << endl;
  for (int rowsMatrix = 0; rowsMatrix < rows; ++rowsMatrix) {
    for (int colsMatrix = 0; colsMatrix < cols; ++colsMatrix) {
      cout << matrix[rowsMatrix][colsMatrix] << " ";
    }
    cout << endl;
  }

  return 0;
}
