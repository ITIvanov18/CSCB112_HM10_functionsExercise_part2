// Task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
Задача 2. Съставете С++ конзолна програма, чрез която да се дефинират
всички необходими функции за решаване на следната задача: всички
положителни елементи в масив да се заменят с подадена от потребителя
функция, реализираща определена формула с 3 параметъра. Например: ако
имаме параметрите а, b, c, то да се връща резултат 1*а+2*b+3*c. Всички
стойности да се задават от потребителя!
*/

void replacePositiveElements(int arr[], int size, int a, int b, int c) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            arr[i] = 1 * a + 2 * b + 3 * c; 
            // Формула: 1*a + 2*b + 3*c
        }
    }
}

int main() {
    int size;
    int a, b, c;

    cout << "Въведете брой на елементите в масива: ";
    cin >> size;

    int* arr = new int[size]; // Динамично заделяне на памет за масива

    cout << "Въведете всеки един елемент на масива:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Въведете стойности за параметрите a, b и c: ";
    cin >> a >> b >> c;

    replacePositiveElements(arr, size, a, b, c);

    cout << "Масивът след изпълнението на функцията: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    delete[] arr;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


