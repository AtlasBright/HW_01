#include <iostream>
#include <string>
#include <locale>

int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    std::string orig_word,user_word;
    orig_word = "Малина";
    for(;;){
    std::cout << "Угадайте слово: ";
    std::cin >> user_word;
    if(user_word == orig_word){
        std::cout << "Правильно! Вы победили! Загаданное слово — " << orig_word;
        break;
    }
    std::cout << "Неправильно" << std::endl;
    }
    
}