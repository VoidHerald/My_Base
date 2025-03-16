//7.	�������� ���������, ������� ������� ��� �� 10 ���������, ���������� ����� �����, � ������� �� ����� ������ ������ �������.

#include "Header.h"
using namespace std;

void deque_again() {
	// ������
	deque<int> myDeque;

	// ���������
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10; i++) {
		myDeque.push_front(rand() % 10);
	}

	// ������� �� �����
	cout << "	��� �������� ����	:	" << endl;
	for (int node : myDeque) {
		cout << " [" << node << "] ";
	}
	cout << endl << endl;
	_getch();

	// ������� �� ����� �� � ��������
	cout << "	������ ������ �������	:	" << endl;
	for (int i = 0;  i < 10 ; i++) {
		if (i % 2 != 0) {
			cout << " [" << myDeque[i] << "] ";
		}
	}
	cout << endl << endl;

	_getch();
}