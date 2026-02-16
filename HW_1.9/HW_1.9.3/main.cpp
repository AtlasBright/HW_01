#include <iostream>
#include <locale>


void reverse(int* mas, int s) {
    int a;
    for(int i = 0; i < s / 2; ++i) {
        a = mas[i];
        mas[i] = mas[s - i - 1];
        mas[s - i - 1] = a;
    }
}

void print_mas(int* mass,int s){
    for(int i = 0; i <= s-1; i++){
        if (i == s-1){
            std::cout << mass[i] << std::endl;
            break;
        }
        std::cout << mass[i] << " ";
    }

}

int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    const int size = 5;
    int mass[size] ={10, 2, 5, 4, 6};
    int(*p)[size]=&mass;
    std::cout << "До функции reverse: ";
    print_mas(*p, size);
    reverse(*p, size);
    std::cout << "После функции reverse: ";
    print_mas(*p, size);


}