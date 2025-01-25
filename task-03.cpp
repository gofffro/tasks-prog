#include <iostream>

using namespace std;

int main() {
  int sizeArray = 0;
  cout << "Размер массива: ";
  cin >> sizeArray;

  if (sizeArray < 0) {
    cout << "Отрицательный массив?" << endl;
    return 1;
  }

  int arrayNum[sizeArray];
  int minElement = arrayNum[0];

  cout << "Введите элементы массива:" << endl;
  for (int indexArray = 0; indexArray < sizeArray; ++indexArray) {
    cout << "Элемент(" << indexArray + 1 << "): ";
    cin >> arrayNum[indexArray];

    if (arrayNum[indexArray] < minElement) {
      minElement = arrayNum[indexArray];
    }
  }

  cout << "Минимальный элемент массива: " << minElement << endl;
}
