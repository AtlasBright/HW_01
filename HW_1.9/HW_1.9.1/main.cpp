#include <iostream>

void print(int* array , int s){
    for(int i = 0; i <= s - 1; i++){
        if (i == s-1){
            std::cout << array[i] << std::endl;
            break;
        }
        std::cout << array[i] << " ";
    }

}

int main () {
    const int size1 = 3;
    int arr1[size1] = {3, 5, 6};
    print(arr1,size1);
    const int size2 = 6;
    int arr2[size2] = {4, 6, 7, 2, 8, 33};
    print(arr2,size2);
    const int size3 = 5;
    int arr3[size3] ={22, 325, 287, 338, 8};
    print(arr3,size3);

}