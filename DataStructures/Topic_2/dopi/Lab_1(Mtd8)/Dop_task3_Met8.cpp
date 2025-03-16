

// 3. Создайте массив строк и отсортируйте его по длине строк.Если длина строк одинакова, то сортируйте
//  их в лексикографическом порядке.Затем выведите содержимое отсортированного массива. (3 баллов)

#include "Header.h"
using namespace std;


void dop3_Array() {;
	array<string,10> array_of_strings;

	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10; i++) {
		array_of_strings[i] = genLine(rand() % 6 + 4, "ABCDEFG");
	}

	_getch();

	cout << "Начальный массив" << endl;

	for (int i = 0; i < 10; i++) {
		cout << " " << i+1<< " ) " + array_of_strings[i] << endl;
	}


	cout << endl << endl;
	_getch();


	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if ((array_of_strings[i].length() > array_of_strings[j].length()) || ((array_of_strings[i].length() == array_of_strings[j].length() && array_of_strings[i] > array_of_strings[j]))) {
				string container = array_of_strings[i];
				array_of_strings[i] = array_of_strings[j];
				array_of_strings[j] = container;
			}
		}
	}

	cout << endl << endl;
	cout << "Отсортированный массив" << endl;


	for (int i = 0; i < 10; i++) {
		cout << " " << i+1<< " ) "+array_of_strings[i] << endl;
	}

	_getch();
}