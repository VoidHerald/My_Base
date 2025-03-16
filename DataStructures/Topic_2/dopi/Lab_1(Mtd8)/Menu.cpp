#include "Header.h"
using namespace std;
void openProgramMenu() {

	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string str1  =  "  1) Написать программу, которая, в зависимости от выбора пользователя, в консоли должна выводить \
							 названия стран мира, с использованием пере-числений.";

	string str2  =  "  2) Написать программу, в которой в конец/в начало массива добавляется n элементов и вывести на экран.";


	string str3  =  "  3) Написать программу, в которой нужно найти среднее арифметическое элементов вектора и вывести его на экран";


	string str4  =  "  4)  Написать программу, в которой нужно найти максималь-ный/минимальный элемент дэки \
							и добавить его в конец / в начало, с выво - дом на экран. ";

	string str5  =  "  5) Написать программу, в которой нужно удалить все элементы односвязного списка \
							и добавить n новых, с выводом на экран.";
	 
	string str6  =  "  6) Написать программу, в которой в начало/в конец двусвязного списка добавляется\
							 n элементов и вывести на экран.";

	string str7  =  "  7) Написать программу, которая будет искать введённое пользователем число в map.";
	 

	string str8  =  "  8) Написать программу, которая создает дек из 10 строковых значений и выводит на экран все элементы, содержащие букву 'о''.";


	string str9  =  "  9) Написать программу, которая создает односвязный список из 5 элементов,\
							 содержащих целые числа, и меняет местами значения первого и последнего элементов.";

	string str10 =  "  10) Написать программу, которая создает массив из 10 целых чисел и выводит на экран только четные числа в обратном порядке.";
	

	string str11 =  "  11) DOP 1.Объедините два массива целых чисел в один и выведите его элементы, используя вектор. (3 балла)";


	string str12 =  "  12)  DOP 2. Создайте дек перечислений, представляющий месяцы года, и добавьте в него несколько элементов.\
									Затем удалите первый и последний элементы и выведите содержимое дека.(3 баллов)";


	string str13 = "  13)  DOP  3. Создайте массив строк и отсортируйте его по длине строк.Если длина строк одинакова, то сортируйте\
									их в лексикографическом порядке.Затем выведите содержимое отсортированного массива. (3 баллов)";


	string str0  =  "  0) Выход из программы.";


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
			+  str0  +  "\n\n Выберите способ работы програмы :";

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
					cout << " Введите число  :  ";
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
				cout << "\nДо свидания.";
				break;
			}
			default: {
				cout << "\nТакого варианта нет. Повторите попытку: ";
				_getch();
				system("cls");
				break;
			}

		}

	} while (choise[0]  !=  'g');
}