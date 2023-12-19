// Task 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 12. Да се дефинира функция char* deleteAll(char* pch, const char* findWhat), 
която връща указател към символния низ, сочен от pch, в който всяко срещане на 
низа findWhat е изтрито. Не използвайте структури от данни, различна от C-символен низ! 
Всички стойности да се задават от потребителя!
*/

char* deleteAll(char* pch, const char* findWhat) {
    int findWhatLen = strlen(findWhat);
    int strLen = strlen(pch);

    for (int i = 0; i <= strLen - findWhatLen; i++) { 
        if (strncmp(&pch[i], findWhat, findWhatLen) == 0) {
            for (int j = i; j < strLen - findWhatLen; j++) {
                pch[j] = pch[j + findWhatLen];
            }
            strLen -= findWhatLen; // Намаляне на общата дължина с дължината на изтрития низ
            i--; // Връщане на брояча назад, за да провери отново променената позиция
        }
    }
    pch[strLen] = '\0'; // Поставяне на терминиращ символ

    return pch;
}

int main() {
    char inputString[100], findString[100];

    cout << "Напишете символен низ: ";
    cin.getline(inputString, 100);

    cout << "Посочете коя част от него да бъде изтрита: ";
    cin.getline(findString, 100);

    char* result = deleteAll(inputString, findString);
    cout << "Резултат: " << result << endl;


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
