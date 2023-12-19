// Task 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 4. Да се дефинира рекурсивна функция, която създава копие на
символен низ в предварително заделена памет. Не използвайте
структури от данни, различна от C-символен низ! Всички
стойности да се задават от потребителя!
*/

char* copyString(char* str, int size) {
    char* copy = new char[size + 1];
    strcpy_s(copy, size + 1, str);
    return copy;
}


int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    cout << "Напишете символен низ (с размер до 100 символа): ";
    cin.getline(input, MAX_SIZE);

    int size = strlen(input);

    char* copiedString = copyString(input, size);

    cout << "Написаният от вас низ: " << input << endl;
    cout << "Копираният низ: " << copiedString << endl;


    delete[] copiedString;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
