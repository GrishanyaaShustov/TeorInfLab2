#include <iostream>

int McCarthy(int n) {
    if (n > 100) {
        return n - 10;
    }
    return McCarthy(McCarthy(n + 11));
}

int main() {
    int n;
    std::cout << "Введите значение n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Ошибка: n должно быть неотрицательным." << std::endl;
        return 1;
    }

    std::cout << "Результат функции Маккарти для n = " << n << " : " << McCarthy(n) << std::endl;

    return 0;
}
