#include <iostream>
#include <fstream>
#include <string>
 

int main (){
    std::string word;
    std::ifstream cur_file ("data.txt");
    for(;;){
        cur_file >> word;
        std::cout << word << std::endl;
        if(cur_file.eof() == 1){
            cur_file.close();
            break;
        }
    }

}