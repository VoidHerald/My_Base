
/* Написать программу, которая создает односвязный список из 5 элементов,\
содержащих целые числа, и меняет местами значения первого и последнего элементов.*/

#include "Header.h"
using namespace std;

//before_begin()
void first_last_swap() 
{
    
    forward_list<int> myList;
    srand(static_cast<unsigned int>(time(0)));

    //  Цикл на 10 итераций
    for (int i = 0; i < 10; i++) {
        //  Добавляем случайное целое число [0;9] в начало списка
        myList.push_front(rand() % 10);
    }
   
    
    std::cout << "  Изначальный список  :" << endl;
    //  Цикл идёт по всем элементам myList
    for (auto elem : myList) 
    {
        //  Выводим элемент
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;
    



    //  Создаём итератор который будет указывать на последний элемент
    forward_list<int>::iterator lastElemPointer=myList.begin();

    //  Создаём итератор который будет указывать на предпоследний элемент элемент
    forward_list<int>::iterator preLastElemPointer=myList.before_begin();

    for (auto iter=++myList.begin();iter!=myList.end();iter++) 
    {
        lastElemPointer++;
        preLastElemPointer++;
    }

    //Сохраняем значения в массив
    int swapValues[] = {*myList.begin(),*(lastElemPointer)};

    myList.erase_after(  myList.insert_after(myList.before_begin(), swapValues[1])  );
    myList.erase_after(  myList.insert_after(preLastElemPointer, swapValues[0])  );

    std::cout << "  Поменены местами первый и последний элементы  :" << endl;
    // Вывод в цикле на консоль элементов списка
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    _getch();
    
    /*
    LinkedList myList;
    int size = 10;
    srand(static_cast<unsigned int>(time(0)));


    for (int i = 0; i <= size; i++) {
        myList.insert(rand() % 10);
    }
    cout << "  Изначальный список  :" << endl;
    myList.printList(); cout << endl;
    _getch();
    cout << "  Обмениваем первый и последний жлементы значениями :  " << endl;
    myList.valuesSwap(1,myList.size);
    myList.printList();
    _getch();
    */
}