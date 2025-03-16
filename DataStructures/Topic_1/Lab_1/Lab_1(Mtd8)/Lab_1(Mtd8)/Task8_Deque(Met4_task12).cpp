/*Написать программу, которая создает дек из 10 строковых значений и выводит на экран все элементы, содержащие букву 'о''*/


#include "Header.h"
using namespace std;

void dequeOfStrings() {
	// Создаём deque random_deque
	deque<string> random_deque;

	// Передаем начальное значение для функции rand
	srand(static_cast<unsigned int>(time(0)));


	//	Цикл на 10 итераций
	for (int ielem = 0; ielem <= 9; ielem++)
	{
		// Передаём в начало дека random_deque строку длинной
		// 5 случайных символов из множества "abcdfo1236"
		random_deque.push_front((genLine(5, "abcdfo1236")));
	}
	_getch();


	cout << "  Изначальный deque :" << endl;
	//Цикл перебирает все элементы random_deque
	for (string elem : random_deque) 
	{
		//Выводим в консоль элемент elem
		cout << "  " + elem + "  " << endl;
	}
	cout << " \n Все строки содержащие 'o' :"<<endl;


	//Цикл перебирает все элементы random_deque
	for (string elem : random_deque)
	{
		//	Условие выполняется если в строке elem есть символ 'o'
		if (elem.find('o') != string::npos)
		//	Метод строки find возвращает индекс первого вхождения подстроки
		//	или отдельного символа (в виде переменной типа size_t предназначен для 
		//	отображения любого обьекта в байтах (length,count)), если не найдена -- то возвращается константа
		//	std::string::npos
		{
			//Выводим elem в консоль
			cout << "  " + elem + "  " << endl;
		}
	}
	_getch();

}



string genLine(int size, string components = "QWERTYUIOPASDFGHJLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789")
{
	string genString;
	for (int i = 0; i <= size; i++) {

		int rndmint = rand() % (components.length());
		//cout << rndmint << endl;
		//substr -- метод возвращаюший подстроку (начиная с символа под номером, длинна подстроки)
		//append(), добавляет в конец стоки другую строку.
		genString.append(components.substr(rndmint, 1));

	}
	return genString;
}