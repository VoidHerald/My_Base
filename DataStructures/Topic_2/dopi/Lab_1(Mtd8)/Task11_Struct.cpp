/*Написать программу, в которой нужно использовать объединение для хранения 
значения переменной в разных форматах (например, как целое число или как массив байтов).*/

#include "Header.h"
#include <bitset>
using namespace std;

union bitint {
	unsigned int num;
	bitset<sizeof(num)*8> bits;
};

void testBitset() {
	vector<bitint> arr_of_unions;
	srand(static_cast<unsigned int>(time(0)));
	//	Цикл 9 итераций
	for (int i = 0; i <= 9; i++) {
		// Вставляем в начало вектора случайное число от 0 до 9
		arr_of_unions.insert(arr_of_unions.begin(), bitint(rand()%255));
	}
	bitint min= bitint(0);
	bitint max = bitint(0);
	max.bits.flip();
	arr_of_unions.insert(arr_of_unions.begin(), bitint(min));
	arr_of_unions.insert(arr_of_unions.begin(), bitint(max));
	arr_of_unions.insert(arr_of_unions.begin(), bitint(arr_of_unions[10].num & arr_of_unions[11].num));
	for (bitint elem : arr_of_unions) {
		cout << "		Число " << elem.num << " и его битовое представление :  " << elem.bits <<"  Длинна : "  <<sizeof(elem)<< endl<<endl;
	}

	_getch();
}