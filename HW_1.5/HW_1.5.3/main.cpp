#include <iostream>
#include <locale>

int main (){   
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    const int row = 3;
    const int col = 6;
    int row_min_id,row_max_id,col_min_id,col_max_id,maxM,minM;
    int dual_mass[row][col] {{30,2,4,7,23,44},{3,4,9,6,8,56},{35,76,44,66,25,58}};
    minM = dual_mass[0][0];
    maxM = dual_mass[0][0];
    for(int r = 0; r < row; r++){
        for(int c = 0; c < col; c++){
            if(dual_mass[r][c] < minM){
                minM = dual_mass[r][c];
                row_min_id = r;
                col_min_id = c;
            }
            if(dual_mass[r][c] > maxM){
                maxM = dual_mass[r][c];
                row_max_id = r;
                col_max_id = c;
            }
            
            if(c == col-1) {
                std::cout << dual_mass[r][c] << "\n";
                continue;
         } 
            std::cout << dual_mass[r][c] << "\t"; 
        
        }
    }
    std::cout <<"Индекс минимального значения массива: " << row_min_id << " " << col_min_id << std::endl;
    std::cout <<"Индекс максмального значения массива: " << row_max_id << " " << col_max_id << std::endl; 
    return 0;
}
