/*1. �������� ���������, �������, � ����������� �� ������ ������������,
� ������� ������ �������� �������� ����� ����, � �������������� ������������.*/

#include "Header.h"
using namespace std;

//���������� ����� ������������
enum class Countries {
	China = 1, Italy, Peru, Salvador, Tonga, Sweden, Switzerland, Monaco, Sudan, Eritrea
};

void chooseYourCountry() {

	int choise;
	cout << " ������� �����  :  ";
	cin >> choise;

	cout << "  �����������! �� ������� ������ � ....  ";

	//� ��������� switch �������� � ���������� choise ���� int � ���� Countries 
	// � ������ �����
	switch (Countries(choise)) {
	case Countries::China: {
		cout << "!! ����� !!" << endl;
		break;
	}
	case Countries::Italy: {
		cout << "!! ������ !!" << endl;
		break;
	}
	case Countries::Peru: {
		cout << "!! ���� !!" << endl;
		break;
	}
	case Countries::Salvador: {
		cout << "!! ��������� !!" << endl;
		break;
	}
	case Countries::Tonga: {
		cout << "!! ����� !!" << endl;
		break;
	}
	case Countries::Sweden: {
		cout << "!! ������ !!" << endl;
		break;
	}
	case Countries::Switzerland: {
		cout << "!! ��������� !!" << endl;
		break;
	}
	case Countries::Monaco: {
		cout << "!! ������ !!" << endl;
		break;
	}
	case Countries::Sudan: {
		cout << "!! ����� !!" << endl;
		break;
	}
	case Countries::Eritrea: {
		cout << "!! ������� !!" << endl;
		break;
	}
	}
	_getch();
}
