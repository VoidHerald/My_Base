/*6. �������� ���������, � ������� � ������/� ����� ����������� 
������ ����������� n ��������� � ������� �� �����.*/

#include "Header.h"
using namespace std;

void dBlinked_list() 
{
	//������ ���-�� ����������� ���������
	int n;
	cout << " ������� �����  :  ";
	cin >> n;

	//	������ ���������� ������
	list<int> start_list;

	//������������� ��������� �������� ��� rand
	srand(static_cast<unsigned int>(time(0)));


	//	��������� ���������� ����������
	for (int i=0; i <n; i++) {
		//	��������� ������� i � ������
		start_list.insert(start_list.begin(), i);
		//	��������� ������� i � �����
		start_list.insert(start_list.end(), i);
	}


	cout << "  ������ �������� ���  :" << endl << "\t";
	// ������� ������
	for (int elem : start_list)
	{
		cout << "[ " << elem << " ] ";
	}

	_getch();
}
