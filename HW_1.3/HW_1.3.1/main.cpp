#include <iostream>
#include <locale>


int main () {
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    bool a, b;
    a=1;
    b=1;
    std::cout << std::boolalpha;
    std::cout << "оператор ||:\n";
    if (a||b){ 
        std::cout<< a << " " << b <<" true" << std::endl;
    }
    else{
        std::cout <<"wrong" << std::endl;
    }
    a=0;
    b=1;
     if (a||b){ 
          std::cout<< a << " " << b <<" true" << std::endl;
    }
    else{
        std::cout <<"wrong" << std::endl;
    }
    a=1;
    b=0;
    if (a||b){ 
          std::cout<< a << " " << b <<" true" << std::endl;
    }
    else{
        std::cout <<"wrong" << std::endl;
    }
    a=0;
    b=0;
    if (a||b){ 
          std::cout<< "wrong" << std::endl;
    }
    else{
         std::cout<< a << " " << b <<" false" << std::endl;
    }
    std::cout << "оператор &&:\n";
    a=1;
    b=1;
    if(a&&b){ 
        std::cout<< a << " " << b <<" true" << std::endl;
    }
    a=0;
    b=1;
    if(a&&b){
          std::cout <<"wrong" << std::endl;
    }
    else{
        std::cout<< a << " " << b <<" false" << std::endl;
    }
    a=1;
    b=0;
    if(a&&b){
          std::cout <<"wrong" << std::endl;
    }
    else{
        std::cout<< a << " " << b <<" false" << std::endl;
    }
    a=0;
    b=0;
    if(a&&b){
          std::cout <<"wrong" << std::endl;
    }
    else{
        std::cout<< a << " " << b <<" false" << std::endl;
    }
return 0;
}