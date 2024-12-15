#include <iostream>

int Add(int x, int y) {
    for (int i = 0; i < y; ++i) {
        ++x;
    }
    return x;
}

int Mult(int x, int y) {
    int result = 0;
    for (int i = 0; i < y; ++i) {
        result += x;
    }
    return result;
}

int Power(int x, int y) {
    if (y == 0) {
        return 1;
    }

    int result = 1;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;
    std::cout << "Введите значения x и y: ";
    std::cin >> x >> y;

    if (x < 0 || y < 0) {
        std::cout << "Ошибка: x и y должны быть неотрицательными." << std::endl;
        return 1;
    }

    std::cout << "Результат сложения чисел " << x << " и " << y << " = " << Add(x, y) << std::endl;
    std::cout << "Результат умножения чисел " << x << " и " << y << " = " << Mult(x, y) << std::endl;
    std::cout << "Результат возведения " << x << " в степень " << y << " = " << Power(x, y) << std::endl;

    return 0;
}
