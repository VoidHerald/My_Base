//4.	�������� ���������, ������� ������� ���������� ������ �� 5 ���������, ���������� ����� �����,
// � �������� ������ ������� �� ����� ��� �������� � �������� ���������� �������� � ������.

#include "Header.h"
using namespace std;

void sum_of_nearest() {
	// ������� ����������� ������
	list <int> myList;

	// ��������� ������
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 0; i < 10; i++) {
		myList.push_front( rand() % 10);
	}
	// �������
	cout << "	����������� ������	:	" << endl;
	for (int node : myList) {
		cout<<" ["<< node << "] ";
	}
	cout << endl << endl;
	_getch();
	

	//��������� �� ����� ������ � ������ ���� ���������� (1�������,2�������) --> (2����,3����)
	for (auto iter1 = ++myList.begin(),iter2=myList.begin(); iter1 != myList.end(); iter1++, iter2++)
	{
		*iter2 = *iter2 + *iter1;
		
	}

	// �������
	cout << "	��������� ������	:	" << endl;
	for (int node : myList) {
		cout << " [" << node << "] ";
	}
	cout << endl << endl;
	_getch();
}