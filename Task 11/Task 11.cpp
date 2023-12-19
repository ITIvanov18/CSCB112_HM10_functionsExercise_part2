// Task 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

/*
Задача 11. Да се дефинира функция char* deleteLast(char* pch, const char* findWhat), 
която връща указател към символния низ, сочен от pch, в който последното срещане
на низа findWhat е изтрито. Не използвайте структури от данни, различна
от C-символен низ! Всички стойности да се задават от потребителя!
*/

char* deleteLast(char* pch, const char* findWhat) {
    int pchLen = strlen(pch);
    int findLen = strlen(findWhat);
    char* found = nullptr;

    // Инициализация на указател, който ще помага за търсенето на последното срещане
    char* current = pch;

    // Цикълът продължава, докато не върне ненулев указател
    while ((current = strstr(current, findWhat)) != nullptr) {
        found = current;
        current = current + findLen; // Продължаване на търсенето след намереното съвпадение
    }

    // Ако е намерено съвпадение, изтрива намереното
    if (found != nullptr) {
        memmove(found, found + findLen, strlen(found + findLen) + 1);
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

    char* result = deleteLast(inputString, findString);
    cout << "Резултат: " << result << endl;


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
