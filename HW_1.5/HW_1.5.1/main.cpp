#include <iostream>

int main (){
    const int ind = 10;
    int mass[ind] = {1,2,3,4,5,6,7,8,9,10};
    for (int a = 0; a < ind; a++){
        if(a==ind-1){
           std::cout << mass[a];
           break;
        }
        std::cout << mass[a] << ", ";
    }

    return 0;
}