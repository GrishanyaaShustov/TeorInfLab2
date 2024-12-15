#include <iostream>

int Fibbonachi(int n) {
    if(n <= 1) {
        return 1;
    }
    return Fibbonachi(n-2) + Fibbonachi(n - 1);
}

int main() {
    int n;
    std::cout << "Введите номер числа Фибоначчи: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Ошибка: номер числа Фибоначчи должен быть неотрицательным." << std::endl;
        return 1;
    }

    std::cout << "Число Фибоначчи F(" << n << ") = " << Fibbonachi(n) << std::endl;
    return 0;
}
