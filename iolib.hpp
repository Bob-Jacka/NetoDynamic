#pragma once

/*
Custom library for actions in Netology C++ course.
Version - 1.0.4
*/

#include <iostream>

typedef const int cint; //constant custom integer type

using namespace std;

void println(string str = "") {
    cout << str << endl;
}

template <typename T>
void print(T str, string separator = "") {
    cout << str << separator;
}

/*
Writes down int value into variable by address
*/
void intUserInput(int &variableAddress) {
    cin >> variableAddress;
}

/*
Writes down long value into variable by address
*/
void longUserInput(long &variableAddress) {
    cin >> variableAddress;
}

/*
Writes down string value into variable by address
*/
void stringUserInput(string &variableAddress) {
    cin >> variableAddress;
}

/*
Function for array output with separator.
Older brother of dynamicArrayOutput
*/
void lineArrayOutput(int* array, int array_size, string separator = " ") {
    for (int i = 0; i < array_size - 1; i++) {
        cout << array[i] << separator;
    }
    cout << array[array_size - 1];
    cout << endl;
}

/*
New technology parametrized function for array output with old innovations
*/
template <typename T>
void dynamicArrayOutput(T* array, int size, string separator = " ") {
    for (int i = 0; i < size; i++)  {
        cout << array[i] << separator; 
    }
	cout << endl;
}
