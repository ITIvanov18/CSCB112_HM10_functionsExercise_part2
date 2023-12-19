// Task 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 13. Да се дефинира функция char* common(char* s1, char* s2),
която връща общия префикс (суфикс) на символните низове s1 и s2. Не
използвайте структури от данни, различна от C-символен низ!
Всички стойности да се задават от потребителя!
*/


char* common(char* s1, char* s2) {
    while (*s1 && *s2 && *s1 == *s2) {
        s1++;
        s2++;
    }

    *s1 = '\0'; // Поставяне на край на общия префикс

    return s1; // Връща указател към първия низ с общия префикс
}

int main() {
    char str1[100], str2[100];

    cout << "Напишете първия низ: ";
    cin.getline(str1, 100);

    cout << "Напишете втория низ: ";
    cin.getline(str2, 100);

    char* result = common(str1, str2);
    cout << "Общият им префикс е: " << str1 << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
