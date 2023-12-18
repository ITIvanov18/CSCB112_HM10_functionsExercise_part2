// Task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


/*
Задача 3. Съставете С++ конзолна програма, чрез която да се сортира
едномерен масив (без значение на метода на сортиране), но функцията да
може да сортира, както в нарастващ ред, така и в намаляващ на база на
подаден параметър от потребителя (предикат). Не използвайте структури
от данни, различна от масив! Всички стойности да се задават от
потребителя!
*/

//Използвам метода на мехурчето като сортиращ алогиритъм
void bubble_sort(int array[], int size, bool order) {
    //външно обхождане
    for (int step = 0; step < (size - 1); step++) {
        int flag = 0;
        //вътрешно обхождане
        for (int i = 0; i < (size - step - 1); i++) {
            //сравняване на 2 съседни елемента и сортиране спрямо зададения ред
            if ((order && array[i] > array[i + 1]) 
                || (!order && array[i] < array[i + 1])) {
                // Размяна на елементите
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                flag = 1;
            }
        }
        // Ако няма размяна, излизаме от цикъла, тъй като масивът е вече сортиран
        if (flag == 0)
            break;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "  " << array[i];
    }
    cout << endl;
}


int main() {

    int size;
    cout << "Какъв размер да има масивът?: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Въведете елементите на масива: "<< endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }


    // Използваме true за възходящ ред и false за низходящ
    bubble_sort(arr, size, true);
    cout << "Масивът, сортиран във възходящ ред: \n";
    printArray(arr, size);


    bubble_sort(arr, size, false);
    cout << "Масивът, сортиран в низходящ ред: \n";
    printArray(arr, size);


    delete[] arr;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu