#include <iostream>
#include <fstream>


int main (){
    int size;
    std::ifstream r_file("in.txt");
    r_file >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        r_file >> arr[i];
        std::cout << arr[i] << " ";
    }
    r_file.close();
    delete[] arr;
}