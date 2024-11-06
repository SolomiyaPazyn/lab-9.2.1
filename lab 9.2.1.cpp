#include <iostream>
#include <cmath>
#include <conio.h>

// Макроси для математичних операцій
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define POW(x, y) (pow((x), (y)))

// Функція для обчислення w
double CalculateW(double x, double y, double z) {
    if (z == 1) {
        return MAX(POW(x - y, 2), ABS(y - x));
    }
    else {
        return MIN(x + POW(y, 2), z + POW(x, 2));
    }
}

int main() {
    double x, y, z, w;
    char ch;

    do {
        std::cout << "Enter x: ";
        std::cin >> x;
        std::cout << "Enter y: ";
        std::cin >> y;
        std::cout << "Enter z: ";
        std::cin >> z;

        w = CalculateW(x, y, z);
        std::cout << "w = " << w << std::endl;

        std::cout << "Repeat? y /n ";
        ch = _getch();
    } while (ch == 'y');

    return 0;
}

