#include "iolib.hpp"

int** create_two_dim_array(cint row_count, cint col_count) {
	int** double_array = new int*[row_count];
	for (int row = 0; row < row_count; row++)
	{
		double_array[row] = new int[col_count];
	}
	return double_array;
}

void fill_two_dim_array(int** double_array, cint row_count, cint col_count) {
	int number = 1;
	for (int row = 0; row < row_count; row++) {
		number = row + 1;
		for (int col = 0; col < col_count; col++) {
			double_array[row][col] = (row + 1) + number * col;
		}
	}
}

void print_two_dim_array(int** double_array, cint row_count, cint col_count) {
	for (int row = 0; row < row_count; row++) {
        for (int col = 0; col < col_count; col++) {
            cout << double_array[row][col] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void delete_two_dim_array(int** double_array, cint row_count, cint col_count) {
	for (int i = 0; i < row_count; i++)
	{
		double_array[i] = new int[col_count];
	}
	for (int j = 0; j < row_count; j++)
	{
		delete[] double_array[j];
	}
	delete[] double_array;
}

int main()
{
	int** double_array = nullptr;
	int rows = 0;
	int cols = 0;

	print("Введите количество строк: ");
	intUserInput(rows);
	print("Введите количество столбцов: ");
	intUserInput(cols);

	double_array = create_two_dim_array(rows, cols);
	fill_two_dim_array(double_array, rows, cols);

	println("Таблица умножения:");
	print_two_dim_array(double_array, rows, cols);
	delete_two_dim_array(double_array, rows, cols);
}
