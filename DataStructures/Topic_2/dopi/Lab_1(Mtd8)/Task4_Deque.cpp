

/*4. Написать программу, в которой нужно найти максималь-ный/минимальный элемент дэки 
и добавить его в конец/в начало, с выво-дом на экран.*/

#include "Header.h"
using namespace std;

void max_min_Deque() {


	//Создаём deque 
	deque<int> random_deque;

	//Устанавливаем начальное значение для rand
	srand(static_cast<unsigned int>(time(0)));

	//Заполняем deque случайными элементами типа int  в диапозоне 0-9
	for (int i = 0; i <= 10; i++) {
		random_deque.insert(random_deque.begin(), rand() % 10);
	}



	//	<algorithm>
	//	min_element/max_element - возвращают минимальные
	//	и максимальный элемент массива. В качестве коллекции
	//	элементов может выступать контейнер или массив
	//  Диапозон задаётся начальным и конецным итератором
	//	Результат так-же итератор

	// Нахдим миниммальный элемент
	int min = *min_element(random_deque.begin(), random_deque.end());
	// Находим макцимальные элемент
	int max = *max_element(random_deque.begin(), random_deque.end());




	cout << "  Изначальная :" << endl << "\t";
	//Цикл перебирает все элементы контейнера random_deque
	for (int elem : random_deque)
	{
		//Выводим элемент
		cout << "[ " << elem << " ] ";
	}
	cout << endl;



	//Вставляем в конец дека min элемент
	random_deque.push_back(min);

	//Вставляем в конец дека max элемент
	random_deque.push_back(max);

	//Вставляем в начало дека max элемент
	random_deque.push_front(min);

	//Вставляем в начало дека max элемент
	random_deque.push_front(max);

	//Выводим изменеённый дек
	cout << "  Добавляем min max элементы в конец и в начало строки :" << endl << "\t";
	for (int elem : random_deque)
	{
		cout << "[ " << elem << " ] ";
	}
	//Вод символа без подтверждения
	_getch();
}