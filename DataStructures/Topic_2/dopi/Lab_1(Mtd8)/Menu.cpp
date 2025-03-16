#include "Header.h"
using namespace std;
void openProgramMenu() {

	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string str1  =  "  1) �������� ���������, �������, � ����������� �� ������ ������������, � ������� ������ �������� \
							 �������� ����� ����, � �������������� ����-��������.";

	string str2  =  "  2) �������� ���������, � ������� � �����/� ������ ������� ����������� n ��������� � ������� �� �����.";


	string str3  =  "  3) �������� ���������, � ������� ����� ����� ������� �������������� ��������� ������� � ������� ��� �� �����";


	string str4  =  "  4)  �������� ���������, � ������� ����� ����� ���������-���/����������� ������� ���� \
							� �������� ��� � ����� / � ������, � ���� - ��� �� �����. ";

	string str5  =  "  5) �������� ���������, � ������� ����� ������� ��� �������� ������������ ������ \
							� �������� n �����, � ������� �� �����.";
	 
	string str6  =  "  6) �������� ���������, � ������� � ������/� ����� ����������� ������ �����������\
							 n ��������� � ������� �� �����.";

	string str7  =  "  7) �������� ���������, ������� ����� ������ �������� ������������� ����� � map.";
	 

	string str8  =  "  8) �������� ���������, ������� ������� ��� �� 10 ��������� �������� � ������� �� ����� ��� ��������, ���������� ����� '�''.";


	string str9  =  "  9) �������� ���������, ������� ������� ����������� ������ �� 5 ���������,\
							 ���������� ����� �����, � ������ ������� �������� ������� � ���������� ���������.";

	string str10 =  "  10) �������� ���������, ������� ������� ������ �� 10 ����� ����� � ������� �� ����� ������ ������ ����� � �������� �������.";
	

	string str11 =  "  11) DOP 1.���������� ��� ������� ����� ����� � ���� � �������� ��� ��������, ��������� ������. (3 �����)";


	string str12 =  "  12)  DOP 2. �������� ��� ������������, �������������� ������ ����, � �������� � ���� ��������� ���������.\
									����� ������� ������ � ��������� �������� � �������� ���������� ����.(3 ������)";


	string str13 = "  13)  DOP  3. �������� ������ ����� � ������������ ��� �� ����� �����.���� ����� ����� ���������, �� ����������\
									�� � ������������������ �������.����� �������� ���������� ���������������� �������. (3 ������)";


	string str0  =  "  0) ����� �� ���������.";


	string choise="";



	do
	{
		cout  <<  endl  <<  str1  +  "\n\n"
			+  str2  +  "\n\n" 
			+  str3  +  "\n\n"
			+  str4  +  "\n\n"
			+  str5  +  "\n\n"
			+  str6  +  "\n\n"
			+  str7  +  "\n\n"
			+  str8  +  "\n\n"
			+  str8  +	"\n\n"
			+  str9  +  "\n\n"
			+  str10 +  "\n\n"
			+  str11 +  "\n\n"
			+  str12 +  "\n\n"
			+  str13 +  "\n\n"
			+  str0  +  "\n\n �������� ������ ������ �������� :";

		cin  >>  choise;
		cout << endl <<"TITA -" << stoi(choise) << endl;
		switch (stoi(choise)) {

			case  1: {

				try {
					chooseYourCountry();
				}

				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				}

				system("cls");
				break;
			}

			case  2: {

				try {
					addSomeElementsToArray();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case  3: {
				try {
					arithmeticMean();
				}

				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				}

				system("cls");
				break;
			}

			case  4: {
				try {
					max_min_Deque();
				}

				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				}

				system("cls");
				break;
			}

			case  5: {

				try {
					sigle_linked_list();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case  6: {

				try {
					dBlinked_list();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case  7: {

				try {
					int local_choise;
					cout << " ������� �����  :  ";
					cin >> local_choise;
					NameByNumber(local_choise);
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case  8: {

				try {
					dequeOfStrings();
					_getch();
				}

				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case  9: {

				try {
					first_last_swap();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case 10: {

				try {
					onlyEvenReverse();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}


			case 11: {

				try {
					dop1_Vector();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case 12: {

				try {
					dop2_Deque();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case 13: {

				try {
					dop3_Array();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}
			case 14: {

				try {
					testBitset();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}
			case 15: {

				try {
					simple_numbers();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};

				system("cls");
				break;
			}

			case 16: {

				try {
					sum_of_nearest();
				}

				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				}
				system("cls");
				break;
			}

			case 17: {

				try {
					deque_again();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};
				system("cls");
				break;
			}

			case 18: {

				try {
					vector<int> vec = { 33,4,555,6,83,5,56,334,23,87 };
					NOD();
					Mediana(vec);
					BiggerThanMiddle();
					_getch();
				}
				catch (const char* error_message) {
					printf("%s\n", error_message);
					_getch();
				};
				system("cls");
				break;
			}
			case  0: {
				cout << "\n�� ��������.";
				break;
			}
			default: {
				cout << "\n������ �������� ���. ��������� �������: ";
				_getch();
				system("cls");
				break;
			}

		}

	} while (choise[0]  !=  'g');
}