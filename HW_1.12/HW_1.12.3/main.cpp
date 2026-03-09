#include <iostream>
#include <fstream>

int main(){
    int user_size, user_count;
    std::ofstream arr_revers ("out.txt");
    std::cout << "Введите размер массива: ";
    std::cin >> user_size;
    arr_revers << user_size << "\n";
    int* arr = new int[user_size];
    for(int i = 0; i < user_size; i++){
        std::cout << "arr[" << i << "] = ";
        std::cin >> user_count;
        arr[i] = user_count;
    }
    for(int j = user_size-1;j >= 0;j--){
        arr_revers<< arr[j] << " ";
    }
    arr_revers.close();
    delete[] arr;
}