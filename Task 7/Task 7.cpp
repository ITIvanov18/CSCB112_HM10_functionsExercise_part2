// Task 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 7. Да се дефинира рекурсивна функция, която заменя всички
срещания на символа X в низа S със символа Y. Не използвайте
структури от данни, различна от C-символен низ! Всички
стойности да се задават от потребителя!
*/


void charReplace(char* str, char x, char y) {
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i] == x) {
            str[i] = y; // Заместваме символа, ако е равен на x
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];
    char x, y;

    cout << "Напишете символен низ: ";
    cin.getline(input, MAX_SIZE);

    cout << "Въведете символ, който да бъде заместен: ";
    cin >> x;

    cout << "Въведете символ, който го замести: ";
    cin >> y;

    charReplace(input, x, y);

    cout << "Преобразуван символен низ: " << input << endl;


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
