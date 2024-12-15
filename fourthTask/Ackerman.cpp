#include <iostream>

// Рекурсивная функция Аккермана
int Ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return Ackermann(m - 1, 1);
    } else {
        return Ackermann(m - 1, Ackermann(m, n - 1));
    }
}

int main() {
    int m, n;
    std::cout << "Введите значения m и n: ";
    std::cin >> m >> n;

    if (m < 0 || n < 0) {
        std::cout << "Ошибка: m и n должны быть неотрицательными." << std::endl;
        return 1;
    }

    std::cout << "Результат функции Аккермана A(" << m << ", " << n << ") = " << Ackermann(m, n) << std::endl;

    return 0;
}
