#include <iostream> 

int main (){
    const int ind = 10;
    int min_Mass,max_Mass;
    int mass[ind] = {500,26,37,47,54,46,76,38,59,100};
    min_Mass = mass[0];
    max_Mass = mass[9];
    for (int a = 0; a < ind; a++){
        if(mass[a] < min_Mass){
            min_Mass = mass[a];    
        }
        if(mass[a] > max_Mass){
            max_Mass = mass[a];
        }
          if(a==ind-1){
           std::cout << mass[a] << std::endl;
           break;
        }
        std::cout << mass[a] << " ";
       
           
    }
    std::cout << "min: " << min_Mass << std::endl;
    std::cout << "max: " << max_Mass << std::endl;
    return 0;
}