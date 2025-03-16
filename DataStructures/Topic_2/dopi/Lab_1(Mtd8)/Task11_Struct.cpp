/*�������� ���������, � ������� ����� ������������ ����������� ��� �������� 
�������� ���������� � ������ �������� (��������, ��� ����� ����� ��� ��� ������ ������).*/

#include "Header.h"
#include <bitset>
using namespace std;

union bitint {
	unsigned int num;
	bitset<sizeof(num)*8> bits;
};

void testBitset() {
	vector<bitint> arr_of_unions;
	srand(static_cast<unsigned int>(time(0)));
	//	���� 9 ��������
	for (int i = 0; i <= 9; i++) {
		// ��������� � ������ ������� ��������� ����� �� 0 �� 9
		arr_of_unions.insert(arr_of_unions.begin(), bitint(rand()%255));
	}
	bitint min= bitint(0);
	bitint max = bitint(0);
	max.bits.flip();
	arr_of_unions.insert(arr_of_unions.begin(), bitint(min));
	arr_of_unions.insert(arr_of_unions.begin(), bitint(max));
	arr_of_unions.insert(arr_of_unions.begin(), bitint(arr_of_unions[10].num & arr_of_unions[11].num));
	for (bitint elem : arr_of_unions) {
		cout << "		����� " << elem.num << " � ��� ������� ������������� :  " << elem.bits <<"  ������ : "  <<sizeof(elem)<< endl<<endl;
	}

	_getch();
}