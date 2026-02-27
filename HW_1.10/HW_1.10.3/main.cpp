#include <iostream>
#include <locale>

int** create_two_dim_array(int cols, int rows){
    int** arr = new int*[rows];
    for(int i = 0; i< rows; i++){
        arr[i]= new int[cols];
    }
    return arr;
}
void fill_two_dim_array (int** arr,int cols, int rows){
    for(int i = 0; i < rows; i++){
          for(int j = 0; j < cols; j++){
            arr[i][j] = (i+1)*(j+1);
          }

    }
}
void print_two_dim_array (int** arr,int cols, int rows){
    std::cout << "Таблица умножения:" << std::endl;
    for(int i = 0; i < rows; i++){
          for(int j = 0; j < cols; j++){
            std::cout << arr[i][j] << "\t";
          }
         std::cout << std::endl;
    }
 }
void delete_two_dim_array (int** arr,int cols, int rows){
    for(int i = 0; i< rows; i++){
       delete[] arr[i];
    }
    delete[] arr;
 }

int main(){
    std::locale::global(std::locale("ru_RU.UTF-8"));
    std::cout.imbue(std::locale());
    int rows,cols;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов:";
    std::cin >> cols;
    int** arr = create_two_dim_array(rows,cols);
    fill_two_dim_array(arr,cols,rows);
    print_two_dim_array(arr,cols,rows);
    delete_two_dim_array(arr,cols,rows);
}