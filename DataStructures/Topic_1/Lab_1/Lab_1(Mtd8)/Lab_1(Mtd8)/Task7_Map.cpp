
/*7. �������� ���������, ������� ����� ������ �������� ������������� ����� � map.*/

#include "Header.h"
using namespace std;


void NameByNumber(int num)
{
	//	������ � �������������� newMap ���������� ������ 
	map <int, string> newMap = { {0,"Zero"},{1,"One"},{2,"Two"},{3,"Three"},\
	{4, "Four"}, { 5,"Five" }, { 6,"Six" }, { 7,"Seven" }, { 8,"Eight" }, {9,"Nine"}};

	// ������� ���� ��������� � map (�� �������� ����,
	// newMap ���������� �������� ��������������� ����� �����) 
	cout <<  "��� ������� " << num <<  " ���������� ����� "+newMap[num] << endl;

	_getch();
}