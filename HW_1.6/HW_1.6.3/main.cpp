#include <iostream>
#include <locale>

int fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main() {
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int n;
    std::cout << "Введите число: ";
    std::cin >> n;

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < n; i++) {
        std::cout << fib(i) << " ";
    }

    return 0;
}
