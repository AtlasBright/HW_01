#include <iostream>
#include <locale>

int main (){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int a;
    std::cout << "введите размер ";
    std::cin >> a;
    int* arr= new int[a];
    for(int i = 0; i < a; i++){
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }
    std::cout << "ваш массив: ";
    for(int i = 0; i < a;i++){
        std::cout << arr[i] << " ";
    }
    delete[] arr;
}