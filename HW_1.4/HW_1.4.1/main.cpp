#include <iostream>
#include <locale>


int main() {
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int num, res;
    res = 0;
    for(;;){
        std::cout << "Введите целое число или число '0', чтобы закончить:";
        std::cin >> num;
        res=num+res;
        if( num == 0) {
            std::cout << "Сумма: " << res+num;
            break;
        }
}
return 0;
}