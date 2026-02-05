#include <iostream>

int swap(int& a, int& b){
   a = b+a;
   b = a-b;
   a = a-b;

}
int main(int argc, char** argv)
{
	int a = 65, b = 77;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}