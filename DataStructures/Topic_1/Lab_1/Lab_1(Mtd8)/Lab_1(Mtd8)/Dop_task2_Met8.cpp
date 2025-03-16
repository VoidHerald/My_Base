

// 2. Создайте дек перечислений, представляющий месяцы года, и добавьте в него несколько элементов.
// Затем удалите первый и последний элементы и выведите содержимое дека.(3 баллов)

#include "Header.h"
using namespace std;

//	Определяем перечисление Month
enum class Month {
	January=1, February, March, April, May, June, July, August, September, October, November, December
};

void dop2_Deque() {
	
	//	Создаём дек наполненный элементами типа Month
	deque<Month> deque_of_Month = {Month(1),Month(2),Month(3),Month(4) ,Month(5),Month(6),\
		Month(7),Month(8),Month(9),Month(10),Month(11),Month(12) };


	cout << "Дек месяцев до изменения:" << endl << endl;

	//Цикл передирает элементы дека пока указатель на конец не будет равен указателю на начало
	for (auto iter=deque_of_Month.begin();iter!=deque_of_Month.end();++iter) {
		std::cout << " [" + to_string(static_cast<int>(*iter)) + "] ";
	}
	cout << endl << endl;


	//Извлекаем один элемент с конца дэка
	deque_of_Month.pop_back();
	//Извлекаем один элемент с начала дэка
	deque_of_Month.pop_front();

	_getch();

	//Вывод дэка после изменения
	cout << "Дек месяцев до изменения:" << endl << endl;
	for (auto iter = deque_of_Month.begin(); iter != deque_of_Month.end(); ++iter) {
		std::cout << " [" + to_string(static_cast<int>(*iter)) + "] ";
	}
	cout << endl << endl;

	_getch();
}
