
/*7. Написать программу, которая будет искать введённое пользователем число в map.*/

#include "Header.h"
using namespace std;


void NameByNumber(int num)
{
	//	Создаём и иничиализируем newMap начальными парами 
	map <int, string> newMap = { {0,"Zero"},{1,"One"},{2,"Two"},{3,"Three"},\
	{4, "Four"}, { 5,"Five" }, { 6,"Six" }, { 7,"Seven" }, { 8,"Eight" }, {9,"Nine"}};

	// Выводим наше обращение к map (мы передаем ключ,
	// newMap возвращает значение соответствующее этому ключу) 
	cout <<  "Под номером " << num <<  " скрывается слово "+newMap[num] << endl;

	_getch();
}