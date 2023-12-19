// Task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 5. Да се дефинира рекурсивна функция, която сравнява
лексикографски две естествени числа. 
Всички стойности да се задават от потребителя!
*/


int main() {
    const int MAX_SIZE = 100;
    char num1[MAX_SIZE], num2[MAX_SIZE];

    cout << "Въведете първото естествено число: ";
    cin >> num1;

    cout << "Въведете второто естествено число: ";
    cin >> num2;

    int result = strcmp(num1, num2);

    if (result == 0) {
        cout << "Числата са еднакви" << endl;
    }
    else if (result < 0) {
        cout << "Първото число е по-малко." << endl;
    }
    else {
        cout << "Второто число е по-малко." << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
