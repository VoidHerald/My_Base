//1.Объедините два массива целых чисел в один и выведите его элементы, используя вектор. (3 балла)



#include "Header.h"
using namespace std;

void dop1_Vector()
{
    setlocale(LC_ALL, "Russian");
    vector <int> vec; 
    array arr1 = { 1,2,3,4,5,6,7,8,9 };            //Созанаём массив arr1
    array arr2 = { -1,-2,-3,-4,-5,-6,-7,-8,-9 };   //Созанаём массив arr1


    /*Выводим массив arr1 в консоль*/
    cout << "   Массив arr1 : " << endl;
    for (int elem : arr1) {
        cout << " [" << elem << "] ";
    }
    cout << endl << endl;
    _getch();



    /*Выводим массив arr2 в консоль*/
    cout << "   Массив arr2 : " << endl;
    for (int elem : arr2) {
        cout << " [" << elem << "] ";
    }
    cout << endl << endl;


    _getch();

    /*Вставляет начиная с позиции, на которую указывает итератор begin,
    элементы из другого контейнера из диапазона между итераторами begin и end */
    vec.insert(vec.begin(), arr1.begin(), arr1.end());


    /*Вставляет начиная с позиции, на которую указывает итератор end,
    элементы из другого контейнера из диапазона между итераторами begin и end */
    vec.insert(vec.end(), arr2.begin(), arr2.end());


    //  Выводим элементы векотра на консоль
    cout << "   Вектор vec состояищий  из элеменов массивов arr1 и arr2 : " << endl << '\t';
    for (int elem : vec) {
        cout << " [" << elem << "] ";
    }
    _getch();
}