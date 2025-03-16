//4.	Написать программу, которая создает двусвязный список из 5 элементов, содержащих целые числа,
// и заменяет каждый элемент на сумму его значения и значения следующего элемента в списке.

#include "Header.h"
using namespace std;

void sum_of_nearest() {
	// Создаем друхсвязный список
	list <int> myList;

	// Заполняем список
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10; i++) {
		myList.push_front( rand() % 10);
	}
	// Выводим
	cout << "	Изначальный список	:	" << endl;
	for (int node : myList) {
		cout<<" ["<< node << "] ";
	}
	cout << endl << endl;
	_getch();
	

	//Итерируем по всему списку с помощю двух итераторов (1элемент,2элемент) --> (2элем,3элем)
	for (auto iter1 = ++myList.begin(),iter2=myList.begin(); iter1 != myList.end(); iter1++, iter2++)
	{
		*iter2 = *iter2 + *iter1;
		
	}

	// Выводим
	cout << "	Изменённый список	:	" << endl;
	for (int node : myList) {
		cout << " [" << node << "] ";
	}
	cout << endl << endl;
	_getch();
}