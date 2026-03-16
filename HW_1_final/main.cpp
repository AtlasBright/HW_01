#include <iostream>
#include <fstream>
#include <unistd.h>

char** create_arr(int rows, int cols){
    char** arr = new char*[rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new char[cols];
    }

    return arr;
}

void del_arr(char** arr, int rows){
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

void flor_intrupt(char** arr,int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr[i][j] = '-';
        }
    }
}

void print_arr (char** arr, int rows, int cols){ 

    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << " ";
            if(arr[i][j] == '*'){
            }
        }
        std::cout <<"\t"<< std::endl;
    }
    

}

void cell_in(char** arr, std::ifstream* file_name){
    int cell_row,cell_col;
    while(*file_name >> cell_row >> cell_col){
        arr[cell_row][cell_col] = '*';
    }
   
}

void copy_arr(char** arr_source, char** arr_target,int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            arr_target[i][j] = arr_source[i][j];
        }
}
}

void neighbour_cell(char** arr_source, char** arr_copy,int rows, int cols, int cell_r, int cell_c){
    int life_counter = 0;
     for (int i = cell_r - 1; i <= cell_r + 1; i++){
        if (i < 0 || i >= rows)
        {
            continue;
        }
        for(int j = cell_c -1; j <= cell_c+1; j++){
            if (j < 0 || j >= cols)
            {
                continue;
            }
            if (i == cell_r && j == cell_c){
                continue;
            }
            if(arr_copy
        [i][j] == '*'){
                life_counter++;
            }


        }
     }
     if (arr_source[cell_r][cell_c] == '*'){
        if(life_counter < 2 || life_counter > 3){
            arr_source[cell_r][cell_c] = '-';
        }
        else{
           arr_source[cell_r][cell_c] = '*';
        }
     }
     else{
        if(life_counter == 3){
        arr_source[cell_r][cell_c] = '*';
         }
        else{
        arr_source[cell_r][cell_c] = '-';
        }
}
}

void game_interupt (char** arr_source, char** arr_copy,int rows, int cols){
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            neighbour_cell(arr_source,arr_copy,rows,cols,i,j);
        }
    }
    print_arr(arr_source,rows,cols);
}
 
int curent_lives (char** arr, int rows, int cols){
    int life_cell = 0;
        for (int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(arr[i][j] == '*'){
                    life_cell++;
                }
                
        }
    }
    return life_cell;
}

bool end_game (char** arr_source, char** arr_copy,int rows, int cols){
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr_source[i][j] != arr_copy[i][j]){
                return false;
                } 
            }
            
}
    return true;
}



int main(){
    std::ifstream cell_info("in.txt");
    int rows,cols,life_cells;
    cell_info >> rows >> cols;

    char** cell_flor = create_arr(rows,cols);
    char** cell_copy = create_arr(rows,cols);
    flor_intrupt(cell_flor,rows,cols);
    cell_in(cell_flor,&cell_info);
    life_cells = curent_lives(cell_flor,rows,cols);
    copy_arr(cell_flor,cell_copy,rows,cols);
    print_arr(cell_flor,rows,cols);
    std::cout << "Генерация:1 Живых клеток: "  << life_cells << std::endl;
    for(int i = 2;;i++){
        life_cells = curent_lives(cell_flor,rows,cols);
        game_interupt(cell_flor,cell_copy,rows,cols);
        std::cout << "Генерация:" << i << " Живых клеток: " << life_cells << std::endl; 
        sleep(1);
       if(end_game(cell_flor,cell_copy,rows,cols) == true){
            std::cout << "Игра окончена! Достигнута стабильная конфигурация! " << std::endl;
            break;
        }
        copy_arr(cell_flor,cell_copy,rows,cols);
        if(life_cells == 0){
            std::cout << "Игра окончена! Все клетки умерли!" << std::endl;
            break;
        }
    }

    del_arr(cell_flor, rows);
}