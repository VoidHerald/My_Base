

// 2. �������� ��� ������������, �������������� ������ ����, � �������� � ���� ��������� ���������.
// ����� ������� ������ � ��������� �������� � �������� ���������� ����.(3 ������)

#include "Header.h"
using namespace std;

//	���������� ������������ Month
enum class Month {
	January=1, February, March, April, May, June, July, August, September, October, November, December
};

void dop2_Deque() {
	
	//	������ ��� ����������� ���������� ���� Month
	deque<Month> deque_of_Month = {Month(1),Month(2),Month(3),Month(4) ,Month(5),Month(6),\
		Month(7),Month(8),Month(9),Month(10),Month(11),Month(12) };


	cout << "��� ������� �� ���������:" << endl << endl;

	//���� ���������� �������� ���� ���� ��������� �� ����� �� ����� ����� ��������� �� ������
	for (auto iter=deque_of_Month.begin();iter!=deque_of_Month.end();++iter) {
		std::cout << " [" + to_string(static_cast<int>(*iter)) + "] ";
	}
	cout << endl << endl;


	//��������� ���� ������� � ����� ����
	deque_of_Month.pop_back();
	//��������� ���� ������� � ������ ����
	deque_of_Month.pop_front();

	_getch();

	//����� ���� ����� ���������
	cout << "��� ������� �� ���������:" << endl << endl;
	for (auto iter = deque_of_Month.begin(); iter != deque_of_Month.end(); ++iter) {
		std::cout << " [" + to_string(static_cast<int>(*iter)) + "] ";
	}
	cout << endl << endl;

	_getch();
}
