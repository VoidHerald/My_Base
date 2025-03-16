//7.	Написать программу, которая создает дек из 10 элементов, содержащих целые числа, и выводит на экран каждый второй элемент.

#include "Header.h"
using namespace std;

void deque_again() {
	// Создаём
	deque<int> myDeque;

	// Заполняем
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10; i++) {
		myDeque.push_front(rand() % 10);
	}

	// Выводим на экран
	cout << "	Все элементы дека	:	" << endl;
	for (int node : myDeque) {
		cout << " [" << node << "] ";
	}
	cout << endl << endl;
	_getch();

	// Выводим на экран но с условием
	cout << "	Каждый второй элемент	:	" << endl;
	for (int i = 0;  i < 10 ; i++) {
		if (i % 2 != 0) {
			cout << " [" << myDeque[i] << "] ";
		}
	}
	cout << endl << endl;

	_getch();
}