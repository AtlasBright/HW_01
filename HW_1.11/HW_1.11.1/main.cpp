#include <iostream>
#include <cstring>
#include <locale>


int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    char* word1 = new char [32];
    char* word2 = new char [32];
    std::cout << "Введите имя: ";
    std::cin >> word1;
    std::cout << "Введите фамилию: ";
    std::cin >> word2;
    *(strchr(word1, '\0')) = ' ';   
    *(strchr(word1, '\0') + 1) = '\0';
    strcat(word1,word2);
    std::cout << "Здравствуйте " << word1 << "!";
    delete[] word1;
    delete[] word2;

}