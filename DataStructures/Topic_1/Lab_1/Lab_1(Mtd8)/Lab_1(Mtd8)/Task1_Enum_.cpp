/*1. Написать программу, которая, в зависимости от выбора пользователя,
в консоли должна выводить названия стран мира, с использованием перечислений.*/

#include "Header.h"
using namespace std;

//Определяем новое перечисление
enum class Countries {
	China = 1, Italy, Peru, Salvador, Tonga, Sweden, Switzerland, Monaco, Sudan, Eritrea
};

void chooseYourCountry() {

	int choise;
	cout << " Введите число  :  ";
	cin >> choise;

	cout << "  Поздравляем! Вы выбрали путёвку в ....  ";

	//В операторе switch приводим и переменную choise типа int к типу Countries 
	// и делаем выбор
	switch (Countries(choise)) {
	case Countries::China: {
		cout << "!! Китай !!" << endl;
		break;
	}
	case Countries::Italy: {
		cout << "!! Италию !!" << endl;
		break;
	}
	case Countries::Peru: {
		cout << "!! Перу !!" << endl;
		break;
	}
	case Countries::Salvador: {
		cout << "!! Сальвадор !!" << endl;
		break;
	}
	case Countries::Tonga: {
		cout << "!! Тонго !!" << endl;
		break;
	}
	case Countries::Sweden: {
		cout << "!! Швеция !!" << endl;
		break;
	}
	case Countries::Switzerland: {
		cout << "!! Швейцарию !!" << endl;
		break;
	}
	case Countries::Monaco: {
		cout << "!! Монако !!" << endl;
		break;
	}
	case Countries::Sudan: {
		cout << "!! Судан !!" << endl;
		break;
	}
	case Countries::Eritrea: {
		cout << "!! Эритрею !!" << endl;
		break;
	}
	}
	_getch();
}
