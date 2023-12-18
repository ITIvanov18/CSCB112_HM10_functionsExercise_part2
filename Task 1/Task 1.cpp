// Task 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*
Задача 1. Съставете С++ конзолна програма, чрез която да се дефинират
предиктани функции, които намират максимум/минимум на елемент на масив.
За двумерен масив да се дефинира функция, която приема като параметър
предикат намиращ максимум или минимум на ред от матрицата. Ако сме на четен ред, 
то да се намира максимума на реда и да се отпечатва, а ако сме на нечетен ред - 
да се намира и отпечата минимума. Всички стойности да се задават от потребителя!
*/

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int main()
{

    int arr[100];
    int size;

    cout << "Колко елемента има масивът? - ";
    cin >> size;

    cout << "Въведете всеки един елемент на масива: " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    bool findMaxValue;
    cout << "За да намерите максимум, напишете (1), a за минимум - напишете (0): ";
    cin >> findMaxValue;

    if (findMaxValue = true) {
        int max = findMax(arr, size);
        cout << "Най-голяма стойност: " << max << endl;
    }
    else {
        int min = findMin(arr, size);
        cout << "Най-малка стойност: " << min << endl;
    }


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
