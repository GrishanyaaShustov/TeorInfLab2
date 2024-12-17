#include <iostream>

int fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }

    int prev1 = 0, prev2 = 1, current = 0;

    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Ошибка: номер числа Фибоначчи должен быть неотрицательным." << std::endl;
        return 1;
    }

    std::cout << "Число Фибоначчи F(" << n << ") = " << fibonacci(n) << std::endl;
    return 0;
}
