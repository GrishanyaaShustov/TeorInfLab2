
#include <iostream>

int S(int& x) {
    return x = x + 1;
}

int &GetThird(int a, int b, int c) {
    return c;
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

int Pow(int x, int y, int t = 0) {
    if (t == y) {
        return 1;
    }
    return Mult(x, Pow(x, y, S(t)));
}

int main() {

    int x = 10;
    int y = 4;

    std::cout << "Сложение " << x << " и " << y << " составляет: " << Add(x, y) << std::endl;
    std::cout << "Произведение " << x << " и " << y << " составляет: " << Mult(x, y) << std::endl;
    std::cout << x << " в степени " << y << " составляет: " << Pow(x, y) << std::endl;

    return 0;
}
