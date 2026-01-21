#include <iostream>
#include <locale>

 int main (){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int num1, num2, num3, minN, midN, maxN;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите третье число: ";
    std::cin >> num3;
    std::cout << " результат: ";
    
    minN = (num1 <= num2) ?
        (num1 <= num3 ? num1 : num3): (num2 <= num3 ? num2 : num3);
    maxN = (num1 >= num2) ? 
        (num1 >= num3 ? num1 : num3): (num2 >= num3 ? num2 : num3);
    midN = (num1 != maxN) ? 
        (num1 != minN ? num1 : (num2 != maxN ? num2 : num3)): (num2 != maxN ? (num2 != minN ? num2 : num3) : num3);  
    std::cout << minN << " "<< midN << " " << maxN ;



    return 0;
 }