/*2. �������� ���������, � ������� � �����/� ������ ������� ����������� n ��������� � ������� �� �����.*/

#include "Header.h"
using namespace std;


void addSomeElementsToArray() {
	//	������ ���������� ��������� ������� �����
	//	��������� � ����� � ������ �������
	int  count_to_add;
	cout << " ������� �����  :  ";
	cin >> count_to_add;


	//	������ � ��������� ������
	vector<int> start_array = {7,7,7,7};


	//������� ��������� ������ � �������
	cout << "  ��������� ������ :" << endl<<"\t";
	for (int elem : start_array) {
		cout << "[ " << elem << " ] ";
	}
	cout << endl;


	//� ������ ������ insert ��������� ������� � ������� �� �������
	// ��������� ��������� begin (������ ����������)   count_to_add(�����)  ������� 1 (int)
	start_array.insert(start_array.begin(), count_to_add, 1);

	//� ������ ������ insert ��������� ������� � ������� �� �������
	//��������� ��������� begin (����� ����������)   count_to_add(�����)  ������� 2 (int)
	start_array.insert(start_array.end(), count_to_add, 2);


	//	������� �������� ������ � �������
	cout << "  �������� ������ :" << endl << "\t";
	//	���������� �� ��������� ��������� for (C++)
	//	for (for-range-declaration : ��������� ){����������}
	//	��� ����� for ��� ������ ������� ������ ����������� ����� ��������//
	//	(��� ������������������ ������� ����� ����������� ����������� ���������� �++)
	for (int elem : start_array) {
		cout << "[ " << elem << " ] ";
	} 

	_getch();
}