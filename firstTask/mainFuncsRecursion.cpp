#include <iostream>

int S(int& x) {
    return x = x + 1;
}

int Add(int x, int y, int t = 0) {
    if (t == y) {
        return x;
    }
    return Add(S(x), y, S(t));
}

int Mult(int x, int y, int t = 0) {
    if (t == y) {
        return 0;
    }
    return Add(x, Mult(x, y, S(t)));
}

int Power(int x, int y, int t = 0) {
    if (t == y) {
        return 1;
    }
    return Mult(x, Power(x, y, S(t)));
}

int main() {
    int x, y;
    std::cout << "Введите значения x и y: ";
    std::cin >> x >> y;

    if (x < 0 || y < 0) {
        std::cout << "Ошибка: m и n должны быть неотрицательными." << std::endl;
        return 1;
    }

    std::cout << "Результат сложения чисел" << x << "и " << y <<" = " << Add(x, y) << std::endl;
    std::cout << "Результат умножения чисел" << x << "и " << y <<" = " << Mult(x, y) << std::endl;
    std::cout << "Результат возведения " << x << "в степень " << y <<" = " << Power(x, y) << std::endl;

    return 0;
}
