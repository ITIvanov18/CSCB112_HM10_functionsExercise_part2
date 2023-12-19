// Task 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


/*
Задача 8. Дадена е мрежа от m х n квадратчета (1 ≤ m, n ≤ 20). Във всяко
квадратче е записано число. Съвкупност от съседни в хоризонтално, вертикално
или диагонално направление квадратчета се нарича област. Да се напише програма, 
която проверява дали в мрежата има област с площ (сума на елементите), равна
на дадено число S. Не използвайте структури от данни, различна от двумерен масив! 
Всички стойности да се задават от потребителя.
*/


int main() {
    int matrix[20][20];
    int rows, cols, targetSum;

    cout << "Колко реда да има квадратната мрежа?: ";
    cin >> rows;

    cout << "Колко колони да има квадратната мрежа?: ";
    cin >> cols;

    cout << "Въведете елементите на квадратната мрежа: " << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Въведете стойност на числото S: ";
    cin >> targetSum;

    bool found = false;

    for (int startRow = 0; startRow < rows; startRow++) {
        for (int startCol = 0; startCol < cols; startCol++) {
            for (int endRow = startRow; endRow < rows; endRow++) {
                for (int endCol = startCol; endCol < cols; endCol++) {

                    int sum = 0;
                    for (int i = startRow; i <= endRow; ++i) {
                        for (int j = startCol; j <= endCol; ++j) {
                            sum += matrix[i][j];
                        }
                    }
                    if (sum == targetSum) {
                        found = true;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (found) {
        cout << "Има подобласт с площ, равна на числото " << targetSum << endl;
    }
    else {
        cout << "Не беше намерена подобласт с площ, равна на числото " << targetSum << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu