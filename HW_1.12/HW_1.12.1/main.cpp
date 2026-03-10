#include <iostream>
#include <fstream>
#include <string>
 

int main (){
    std::string word;
    std::ifstream cur_file ("data.txt");
    if (!cur_file.is_open()) {
    std::cout << "Не удалось открыть файл\n";
    return 1;
}
   while (cur_file >> word) {
    std::cout << word << std::endl;
    }
    cur_file.close();
    return 0;

}