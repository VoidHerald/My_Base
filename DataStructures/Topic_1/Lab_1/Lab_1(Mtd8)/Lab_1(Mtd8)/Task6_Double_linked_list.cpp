/*6. Написать программу, в которой в начало/в конец двусвязного 
списка добавляется n элементов и вывести на экран.*/

#include "Header.h"
using namespace std;

void dBlinked_list() 
{
	//Вводим кол-во добавляемых элементов
	int n;
	cout << " Введите число  :  ";
	cin >> n;

	//	Создаём двусвязный список
	list<int> start_list;

	//Устанавливаем начальное значение для rand
	srand(static_cast<unsigned int>(time(0)));


	//	Заполняем случайными элементами
	for (int i=0; i <n; i++) {
		//	Вставляем элемент i в начало
		start_list.insert(start_list.begin(), i);
		//	Вставляем элемент i в конец
		start_list.insert(start_list.end(), i);
	}


	cout << "  Список выглядит так  :" << endl << "\t";
	// Выводим список
	for (int elem : start_list)
	{
		cout << "[ " << elem << " ] ";
	}

	_getch();
}
