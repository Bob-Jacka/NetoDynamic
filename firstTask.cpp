#include "iolib.hpp"

int main(int argc, char** argv)
{
    int array_size = 0;
    int* dynamic_array;
    println("Введите размер массива: ");
    intUserInput(array_size);

    if (array_size > 0) {
       dynamic_array = new int[array_size]; 
   } else {
	throw 1;
   }
    
    int counter = 0; //array counter
    while (true) {
        if (counter < array_size) {
            int array_elem = 0;
            cout << "dynamic_array" << "[" << counter << "]" << " = ";
            intUserInput(array_elem);
            dynamic_array[counter] = array_elem;
            counter++;
        } else {
            break;
        } 
    }

    println("Введённый массив: ");
    lineArrayOutput(dynamic_array, array_size, " ", true);
    delete[] dynamic_array;
}
