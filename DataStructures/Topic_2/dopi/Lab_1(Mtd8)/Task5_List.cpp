/*5. �������� ���������, � ������� ����� ������� ��� �������� ������������ ������ 
� �������� n �����, � ������� �� �����.*/



#include "Header.h"
using namespace std;





void sigle_linked_list() {

    //  ������ ������
    forward_list<int> myList;

    //  ��������� ��� 10 ���������� ���������� 
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 10; i++) {
        myList.push_front(rand() % 10);
    }


    std::cout << "  ����������� ������  :" << endl;
    // ������� �� ������� ���������� ������
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;


    //  � ������ ������ .clear() ��������� ������� ������
    cout << "������� ������ ������� clearList " << endl << endl;
    myList.clear();

    //  ������� ��������� ������
    cout << "  ������ ����� �������  " << endl;
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;

    //  ������ ��� �� ����������� ���������
    cout << "  ������� ���������� ����� ���������: ";
    int numberOfNewElements;
    cin >> numberOfNewElements;

    //  ������ umberOfNewElements ����� ��������� ��������� [0:9]
    for (int i = 0; i < numberOfNewElements; i++) {
        myList.push_front(rand() % 10);
    }

    cout << "  ������ �������� ���������� ���������� � ���������\
                        �� 0 �� 9 � ���������� numberOfNewElements" << endl;

    //  ������� �� �������
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;

    _getch();

    /*
LinkedList myList;
myList.insert(1);
myList.insert(2);
myList.insert(3);

cout << "  ������� ������  " << endl;
myList.printList();
cout << "������� ������ ������� clearList " << endl;
myList.clearList();
cout << "  ������ ����� �������  " << endl;
myList.printList();

cout << "  ������� ���������� ����� ���������: ";
int numberOfNewElements;
cin >> numberOfNewElements;

srand(static_cast<unsigned int>(time(0)));
for (int i = 0; i <= numberOfNewElements; i++) {
    myList.insert(rand() % 10);
}

cout << "  ������ �������� ���������� ���������� � ���������\
                    �� 0 �� 9 � ���������� numberOfNewElements" << endl;
myList.printList();
*/
}


