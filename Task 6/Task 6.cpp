// Task 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

/*
Задача 6. Да се дефинира рекурсивна функция, която преобразува
символен низ от цифри в съответното му естествено число.
Не използвайте структури от данни, различна от C-символен низ!
Всички стойности да се задават от потребителя!
*/


int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    cout << "Въведете символен низ от цифри: ";
    cin >> input;

    //ASCII към Int преобразуване
    int result = atoi(input);

    cout << "Преобразуваното естествено число: " << result << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
