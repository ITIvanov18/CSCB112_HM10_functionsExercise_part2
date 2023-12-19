// Task 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
using namespace std;

/*
Задача 14. Да се напише функция int countChar(char* s1, char* s2),
която връща броя на еднаквите символи в символните низове s1 и s2.
Не използвайте структури от данни, различна от C-символен низ!
Всички стойности да се задават от потребителя
*/

int countChar(char* s1, char* s2) {
    int len = min(strlen(s1), strlen(s2)); // Намираме дължината на по-късия от двата низа
    int count = 0; // Брояч на общите символи

    for (int i = 0; i < len; ++i) {
        if (s1[i] == s2[i]) { // Ако съответните символи съвпадат, увеличаваме брояча
            count++;
        }
    }

    return count;
}

int main() {
    char str1[100], str2[100];

    cout << "Напишете първия символен низ: ";
    cin.getline(str1, 100);

    cout << "Напишете втория символен низ: ";
    cin.getline(str2, 100);

    int result = countChar(str1, str2);
    cout << "Брой на общите им символи е: " << result << endl;


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
