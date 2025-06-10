#include "iolib.hpp"

double* create_array(int size) {
	return new double[size] ();
}

int main()
{
	int array_size = 0;
	print("Введите размер массива: ");
	intUserInput(array_size);
	double* dynamic_array = create_array(array_size);
	print("Массив: ");
	dynamicArrayOutput(dynamic_array);
}