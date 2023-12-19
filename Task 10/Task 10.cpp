// Task 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 10. Да се дефинира функция char* deleteFirst(char* pch, const char* findWhat), 
която връща указател към символния низ, сочен от pch, в който първото срещане на 
низа findWhat е изтрито. Не използвайте структури от данни, различна 
от C-символен низ! Всички стойности да се задават от потребителя!
*/

char* deleteFirst(char* pch, const char* findWhat) {
    int pchLen = strlen(pch);
    int findLen = strlen(findWhat);

    // Намиране на първото срещане на низа findWhat в pch
    char* found = strstr(pch, findWhat);

    if (found != nullptr) {
        // Променлива, която пази позицията на първия символ след низа findWhat
        char* nextChar = found + findLen;

        // Пренареждане на символите след низа findWhat
        for (int i = found - pch; i < pchLen - findLen; ++i) {
            pch[i] = pch[i + findLen];
        }
        // Закриване на новия край на низа
        pch[pchLen - findLen] = '\0';
    }
    return pch;
}

int main() {

    char inputString[100];
    cout << "Напишете символен низ: ";
    cin.getline(inputString, 100);

    char findString[100];
    cout << "Посочете коя част от него да бъде изтрита: ";
    cin.getline(findString, 100);

    char* result = deleteFirst(inputString, findString);
    cout << "Резултат: " << result << endl;


    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
