/*�������� ���������, ������� ������� ��� �� 10 ��������� �������� � ������� �� ����� ��� ��������, ���������� ����� '�''*/


#include "Header.h"
using namespace std;

void dequeOfStrings() {
	// ������ deque random_deque
	deque<string> random_deque;

	// �������� ��������� �������� ��� ������� rand
	srand(static_cast<unsigned int>(time(0)));


	//	���� �� 10 ��������
	for (int ielem = 0; ielem <= 9; ielem++)
	{
		// ������� � ������ ���� random_deque ������ �������
		// 5 ��������� �������� �� ��������� "abcdfo1236"
		random_deque.push_front((genLine(5, "abcdfo1236")));
	}
	_getch();


	cout << "  ����������� deque :" << endl;
	//���� ���������� ��� �������� random_deque
	for (string elem : random_deque) 
	{
		//������� � ������� ������� elem
		cout << "  " + elem + "  " << endl;
	}
	cout << " \n ��� ������ ���������� 'o' :"<<endl;


	//���� ���������� ��� �������� random_deque
	for (string elem : random_deque)
	{
		//	������� ����������� ���� � ������ elem ���� ������ 'o'
		if (elem.find('o') != string::npos)
		//	����� ������ find ���������� ������ ������� ��������� ���������
		//	��� ���������� ������� (� ���� ���������� ���� size_t ������������ ��� 
		//	����������� ������ ������� � ������ (length,count)), ���� �� ������� -- �� ������������ ���������
		//	std::string::npos
		{
			//������� elem � �������
			cout << "  " + elem + "  " << endl;
		}
	}
	_getch();

}



string genLine(int size, string components = "QWERTYUIOPASDFGHJLZXCVBNMqwertyuiopasdfghjklzxcvbnm0123456789")
{
	string genString;
	for (int i = 0; i <= size; i++) {

		int rndmint = rand() % (components.length());
		//cout << rndmint << endl;
		//substr -- ����� ������������ ��������� (������� � ������� ��� �������, ������ ���������)
		//append(), ��������� � ����� ����� ������ ������.
		genString.append(components.substr(rndmint, 1));

	}
	return genString;
}