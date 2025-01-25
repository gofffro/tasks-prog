#include <iostream>

using namespace std;

int main() {
    int coordinatesX[4], coordinatesY[4];
    double centerX[2], centerY[2];
    for (int index = 0; index < 4; ++index) {
        cout << "coordinatesX: " << index + 1 << " = ";
        cin >> coordinatesX[index];
        cout << "coordinatesY: " << index + 1 << " = ";
        cin >> coordinatesY[index];
    }

    centerX[0] = (double)(coordinatesX[0] + coordinatesX[2]) / 2;
    centerX[1] = (double)(coordinatesX[1] + coordinatesX[3]) / 2;

    centerY[0] = (double)(coordinatesY[0] + coordinatesY[2]) / 2;
    centerY[1] = (double)(coordinatesY[1] + coordinatesY[3]) / 2;

    if (centerX[0] == centerX[1] && centerY[0] == centerY[1]) {
        cout << "paralelogram" << endl;
    } 
    else {
        cout << "ne paralelogram" << endl;
    }
}
