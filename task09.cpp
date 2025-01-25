#include <iostream>

using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main() {
    int sizeArray = 0;
    cout << "Введите размер массива: ";
    cin >> sizeArray;

    if (sizeArray < 0) {
        cout << "Отрицательный размер массива?" << endl;
        return 1;
    }

    int array[sizeArray];
    cout << "Введите элементы массива:" << endl;
    for (int indexArray = 0; indexArray < sizeArray; ++indexArray) {
        cout << "Элемент(" << indexArray + 1 << "): ";
        cin >> array[indexArray];
    }

    bubbleSort(array, sizeArray);

    cout << "Отсортированный массив:" << endl;
    for (int indexArray = 0; indexArray < sizeArray; ++indexArray) {
        cout << array[indexArray] << " ";
    }
    cout << endl;
}
