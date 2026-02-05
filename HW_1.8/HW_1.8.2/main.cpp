#include <iostream>
#include <locale>

namespace adding{
    int calc(int a, int b){
        return a+b;
    }
} 
namespace multiplex{
    int calc(int a, int b){
        return a*b;
    }
} 
namespace subtract{
    int calc(int a, int b){
        return a-b;
    }
}
namespace splited{
    int calc (int a, int b){
        if(b == 0 || a == 0){
            return EXIT_FAILURE;
        }
        return a/b;
    }
}

int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int num1 = 10;
    int num2 = 5;
    std::cout << "Сложение: " << adding::calc(num1,num2) << std::endl;
    std::cout << "Вычитание: " << subtract::calc(num1,num2) << std::endl;
    std::cout << "Умножение: " << multiplex::calc(num1,num2) << std::endl;
    std::cout << "Деление: " << splited::calc(num1,num2) << std::endl;
    return 0;
}
