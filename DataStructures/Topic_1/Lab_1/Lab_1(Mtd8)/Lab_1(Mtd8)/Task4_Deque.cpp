

/*4. �������� ���������, � ������� ����� ����� ���������-���/����������� ������� ���� 
� �������� ��� � �����/� ������, � ����-��� �� �����.*/

#include "Header.h"
using namespace std;

void max_min_Deque() {


	//������ deque 
	deque<int> random_deque;

	//������������� ��������� �������� ��� rand
	srand(static_cast<unsigned int>(time(0)));

	//��������� deque ���������� ���������� ���� int  � ��������� 0-9
	for (int i = 0; i <= 10; i++) {
		random_deque.insert(random_deque.begin(), rand() % 10);
	}



	//	<algorithm>
	//	min_element/max_element - ���������� �����������
	//	� ������������ ������� �������. � �������� ���������
	//	��������� ����� ��������� ��������� ��� ������
	//  �������� ������� ��������� � �������� ����������
	//	��������� ���-�� ��������

	// ������ ������������ �������
	int min = *min_element(random_deque.begin(), random_deque.end());
	// ������� ������������ �������
	int max = *max_element(random_deque.begin(), random_deque.end());




	cout << "  ����������� :" << endl << "\t";
	//���� ���������� ��� �������� ���������� random_deque
	for (int elem : random_deque)
	{
		//������� �������
		cout << "[ " << elem << " ] ";
	}
	cout << endl;



	//��������� � ����� ���� min �������
	random_deque.push_back(min);

	//��������� � ����� ���� max �������
	random_deque.push_back(max);

	//��������� � ������ ���� max �������
	random_deque.push_front(min);

	//��������� � ������ ���� max �������
	random_deque.push_front(max);

	//������� ���������� ���
	cout << "  ��������� min max �������� � ����� � � ������ ������ :" << endl << "\t";
	for (int elem : random_deque)
	{
		cout << "[ " << elem << " ] ";
	}
	//��� ������� ��� �������������
	_getch();
}