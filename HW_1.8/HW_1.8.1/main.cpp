#include <iostream>
#include <locale>

void counting_function(){
static int counter = 0;
std::cout << "Количество вызовов функции counting_function():" << ++counter << std::endl;

}



int main(int argc, char** argv){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    for (int i = 0; i < 33; i++)
    {
        counting_function();
    }
}
