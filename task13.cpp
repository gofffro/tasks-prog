#include <iostream>

using namespace std;

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

    int start = 0;
    int end = sizeArray - 1;
    while (start < end) {
        swap(array[start], array[end]);
        ++start;
        --end;
    }

    cout << "Инвертированный массив:" << endl;
    for (int indexArray = 0; indexArray < sizeArray; ++indexArray) {
        cout << array[indexArray] << " ";
    }
    cout << endl;
}
