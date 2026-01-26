#include <iostream>
#include <locale>


int main() {
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int num,sum,final;
    final=0;
    std::cout << "Введите целое число:";
    std::cin >> num;
    while (num !=0){   
        if(num < 0){
                std::cout <<"error ";
                break;
            }
        sum = num%10;
        num = num/10;
        final=final+sum;    
    }
    std::cout <<"Сумма цифр:" << final;
       return 0; 
    }
        
    
    
    

  



