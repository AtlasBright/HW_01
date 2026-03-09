#include <iostream>
#include <fstream>

int main() {
    std::ifstream r_file("in.txt");
    int rows, cols;
    r_file >> rows >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            r_file >> arr[i][j];
        }
    }

    r_file.close();

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}