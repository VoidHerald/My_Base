
/* �������� ���������, ������� ������� ����������� ������ �� 5 ���������,\
���������� ����� �����, � ������ ������� �������� ������� � ���������� ���������.*/

#include "Header.h"
using namespace std;

//before_begin()
void first_last_swap() 
{
    
    forward_list<int> myList;
    srand(static_cast<unsigned int>(time(0)));

    //  ���� �� 10 ��������
    for (int i = 0; i < 10; i++) {
        //  ��������� ��������� ����� ����� [0;9] � ������ ������
        myList.push_front(rand() % 10);
    }
   
    
    std::cout << "  ����������� ������  :" << endl;
    //  ���� ��� �� ���� ��������� myList
    for (auto elem : myList) 
    {
        //  ������� �������
        std::cout << " [" << elem << "] ";
    }
    std::cout << endl << endl;
    



    //  ������ �������� ������� ����� ��������� �� ��������� �������
    forward_list<int>::iterator lastElemPointer=myList.begin();

    //  ������ �������� ������� ����� ��������� �� ������������� ������� �������
    forward_list<int>::iterator preLastElemPointer=myList.before_begin();

    for (auto iter=++myList.begin();iter!=myList.end();iter++) 
    {
        lastElemPointer++;
        preLastElemPointer++;
    }

    //��������� �������� � ������
    int swapValues[] = {*myList.begin(),*(lastElemPointer)};

    myList.erase_after(  myList.insert_after(myList.before_begin(), swapValues[1])  );
    myList.erase_after(  myList.insert_after(preLastElemPointer, swapValues[0])  );

    std::cout << "  �������� ������� ������ � ��������� ��������  :" << endl;
    // ����� � ����� �� ������� ��������� ������
    for (auto elem : myList)
    {
        std::cout << " [" << elem << "] ";
    }
    _getch();
    
    /*
    LinkedList myList;
    int size = 10;
    srand(static_cast<unsigned int>(time(0)));


    for (int i = 0; i <= size; i++) {
        myList.insert(rand() % 10);
    }
    cout << "  ����������� ������  :" << endl;
    myList.printList(); cout << endl;
    _getch();
    cout << "  ���������� ������ � ��������� �������� ���������� :  " << endl;
    myList.valuesSwap(1,myList.size);
    myList.printList();
    _getch();
    */
}