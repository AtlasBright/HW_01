#include <iostream>
#include <locale>


int main () {
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int num;
    std::cout << "Введите целое число:";
    std::cin >> num;
    for (int a = 1; a <=10; a++){
        std::cout << num << "x" << a << "=" << num*a << std::endl;
    }
    return 0;
}