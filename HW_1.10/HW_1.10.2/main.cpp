#include <iostream>
#include <locale>


double* create_arr(int a){
    return new double[a]{0};
}


int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int size;
    std::cout << "введите размер ";
    std::cin >> size;
    double* arr = create_arr(size);
    std::cout << "Массив: ";
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    delete[] arr;

}