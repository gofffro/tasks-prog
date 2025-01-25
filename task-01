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
  int sumArray = 0;
  int multiplicArray = 1;

  cout << "Введите элементы массива:" << endl;
  for (int indexArray = 0; indexArray < sizeArray; ++indexArray) {
    cout << "Элемент(" << indexArray + 1 << "): ";
    cin >> arrayNum[indexArray];

    sumArray += arrayNum[indexArray];
    multiplicArray *= arrayNum[indexArray];
  }

    cout << "Сумма элементов массива: " << sumArray << endl;
    cout << "Произведение элементов массива: " << multiplicArray << endl;
}
