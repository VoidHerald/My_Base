/*5. Написать программу, в которой нужно удалить все элементы односвязного списка 
и добавить n новых, с выводом на экран.*/



#include "Header.h"
using namespace std;





void sigle_linked_list() {

    //  Создаём список
    forward_list<int> myList;

    //  Заполняем его 10 члучайными значениями 
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 10; i++) {
        myList.push_front(rand() % 10);
    }


    std::cout << "  Изначальный список  :" << endl;
    // Выводим на консоль содержимое списка
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;


    //  С помощю метода .clear() полностью очищаем список
    cout << "Очищаем список методом clearList " << endl << endl;
    myList.clear();

    //  Выводим очищенный список
    cout << "  Список после очистки  " << endl;
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;

    //  Вводим кол во добавляемых элементов
    cout << "  Введите количество новых элементов: ";
    int numberOfNewElements;
    cin >> numberOfNewElements;

    //  Вводим umberOfNewElements новых случайных элементов [0:9]
    for (int i = 0; i < numberOfNewElements; i++) {
        myList.push_front(rand() % 10);
    }

    cout << "  Список заполнен случайными элементами в диапозоне\
                        от 0 до 9 в количестве numberOfNewElements" << endl;

    //  Выводим на консоль
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;

    _getch();

    /*
LinkedList myList;
myList.insert(1);
myList.insert(2);
myList.insert(3);

cout << "  Входный список  " << endl;
myList.printList();
cout << "Очищаем список методом clearList " << endl;
myList.clearList();
cout << "  Список после очистки  " << endl;
myList.printList();

cout << "  Введите количество новых элементов: ";
int numberOfNewElements;
cin >> numberOfNewElements;

srand(static_cast<unsigned int>(time(0)));
for (int i = 0; i <= numberOfNewElements; i++) {
    myList.insert(rand() % 10);
}

cout << "  Список заполнен случайными элементами в диапозоне\
                    от 0 до 9 в количестве numberOfNewElements" << endl;
myList.printList();
*/
}


