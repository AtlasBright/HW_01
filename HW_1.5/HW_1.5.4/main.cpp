#include <iostream>
#include <locale>


int main (){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    const int size = 10;
    int buble;
    int mass[size]{1,2,4,6,8,10,3,5,7,9};
    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < size; i++){
        if(i == size-1){
           std::cout << mass[i] << std:: endl;
           break;}
        std::cout << mass[i]<< " ";
    }
    std::cout <<"Массив после сортировки: ";
    for (int a = 0; a < size; a++){
        for (int j = size-1; j>a; j--){
            if (mass[j] < mass[j-1]){
                buble = mass[j];
                mass[j] = mass [j-1];
                mass[j-1] = buble;
            }
        }
        std::cout << mass[a]<< " ";
    }
    
}