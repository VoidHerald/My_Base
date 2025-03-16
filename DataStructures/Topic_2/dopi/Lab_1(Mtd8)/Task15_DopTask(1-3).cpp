#include "Header.h"
using namespace std;

/*Для любых двух натуральных чисел  a>b  верно следующее равенство : НОД(a; b) = НОД(a - b; b)*/
/*1.Напишите программу, которая будет находить наибольший общий дели-тель двух чисел. (3 балла)*/
int NOD() {
    cout << endl << "НОД" << endl;
    int a, b;
    cout << "Введите число a: "; cin >> a; cout << endl;
    cout << "Введите число b: "; cin >> b; cout << endl;
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    cout << "НОД чисел: "<<a<<endl;
    return a;
}

/*2. Напишите программу, которая будет находить медиану вектора чисел. (3 балла)*/
/*Медиана — это число, которое является серединой множества чисел,
то есть половина чисел имеют значения большие, чем медиана, а половина 
чисел имеют значения меньшие, чем медиана.*/

int Mediana(vector<int> vec) {
    cout << endl << "Медиана вектора:" << endl;
    for (auto elem : vec) {
        cout << " [" << elem << "] ";
    }cout << endl;
    int mid = vec.size() / 2;
    sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 1) {
        cout << "Равна :" << vec[(mid)] << endl;
        return vec[ (mid)];
    }
    else {
        cout << "Равна :" << (vec[mid] + vec[mid + 1]) / 2 << endl;
        return (vec[mid]+vec[mid+1])/2;
    }
}

/*
* Напишите программу, которая запрашивает у пользователя 10 целых чисел и сохраняет их в
* контейнере array в STL C++. Затем программа должна вычислить среднее арифметическое этих
* чисел и вывести на экран все числа, которые больше среднего арифметического.
*/
void BiggerThanMiddle() {
    cout << endl << "Числа больше среднего арифметического" << endl;
    array<int, 10>Myarr;
    int sum=0;

    for (int i = 0; i < 10; i++) {
        cout << "Введите " << i <<"й элемент массива: ";
        cin >> Myarr[i];
        sum += Myarr[i];
        cout << endl;
    }

    cout << endl;
    int mid = sum / 10;
    cout << "Числа которые больше седнего арифметического: ";


    for (int i = 0; i < 10; i++) {
        if (Myarr[i] > mid) {
            cout << " " << Myarr[i];
        }
    }
}