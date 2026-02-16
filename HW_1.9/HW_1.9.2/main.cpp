#include <iostream>


void swap(int* a, int* b){
  int mer;
  mer = *a;
  *a = *b;
  *b = mer;
}
int main(int argc, char** argv)
{
	int a = 65, b = 77;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a,&b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}