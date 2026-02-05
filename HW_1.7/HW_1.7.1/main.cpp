#include <iostream>

int main(){
    int var=1;
    short short_var = 3;
    long long_var = 2222222222222222222;
    long long very_long_var = 4444444444444444444;
    float broke_var = 3.5f;
    double double_var = 3.6;
    long double long_double_var = 3353452345345.66;
    bool flag = true;
    std::cout << "int: "<< &var << " " << sizeof(var) << std::endl;
    std::cout << "short: " << &short_var << " " << sizeof(short_var) << std::endl;
    std::cout << "long: " <<  &long_var << " " << sizeof(long_var)<< std::endl;
    std::cout << "long long: " << &very_long_var << " " << sizeof(very_long_var) << std::endl;
    std::cout << "float: " << &broke_var << " " << sizeof (broke_var) << std::endl;
    std::cout << "double: " << &double_var << " " << sizeof(double_var)<< std::endl;
    std::cout << "long double: " << &long_double_var << " " << sizeof(long_double_var) << std::endl;
    std::cout << "Bool: " << &flag << " " << " " << sizeof(flag) << std::endl;

    return 0;

}