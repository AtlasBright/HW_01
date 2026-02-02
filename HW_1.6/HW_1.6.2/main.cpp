#include <iostream>

int pwr(int power, int value){
    int result = 1;
    for (int i = 0; i < power; i++)
    {
       result *= value;
    }
return result;
}

int main(int argc, char** argv)
{
    int value = 5, power = 2;
    std::cout << value << " в степени " << power << " = " << pwr(value,power) << std::endl;
    value = 3;
    power = 3;
    std::cout << value << " в степени " << power << " = " << pwr(value,power) << std::endl;
    value = 4;
    power = 4;
    std::cout << value << " в степени " << power << " = " << pwr(value,power) << std::endl;
    return 0;
}

