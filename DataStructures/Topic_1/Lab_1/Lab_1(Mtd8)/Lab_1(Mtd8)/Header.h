#pragma once
#include <string>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ctime>
#include <locale>
#include <cstdlib>

#include <array>
#include <vector>
#include <deque>
#include <algorithm>
#include <list>
#include <map>
#include <string>
#include <forward_list>

using namespace std;

enum class Countries;

enum class Month;

class Node {
public:
    int data;                   // �������� ����
    Node* next;                 // ��������� �� ��������� �������
};

class LinkedList {
public:
    LinkedList() {             // ����������� ������ LinkedList
        head = nullptr;           // ������������� ��������� �� ������ ������ � NULL
        size = 0;
    }
    void insert(int value) {   // ����� ������ ��� ������� ������ �������� � ������
        Node* newNode = new Node;   // ������� ����� ���� ������
        newNode->data = value;      // ������ �������� ��� ������ ����
        newNode->next = head;       // ����� ���� ��������� �� ������� ������ ������
        head = newNode;             // ������������� ����� ���� ��� ����� ������ ������
        size += 1;
    }

    void printList() {          // ����� ������ ��� ������ ������ �� �����
        Node* temp = head;      // ������� ��������� ��������� �� ������ ������
        while (temp != nullptr) {  // ���� �� ��������� ����� ������
            std::cout << temp->data << " ";  // ������� �������� �������� ���� ������ �� �����
            temp = temp->next;           // ��������� � ���������� ���� ������
        }
    }

    void clearList() {

        for (int i = 0; i <= size; i++) {
            Node* toDelete = head;  // ��������� ��������� �� ������� ������ ������ 
            head = head->next;     // ��������� ��������� head �� ��������� �������
            delete toDelete;      //  ������� ������ ���������� ��� ��������
        }
        head->next = nullptr;      //  ����������� ��������� �� ����� ������ ����������� �������� nullptr
    }

    void valuesSwap(int indx1, int indx2)
    {
        Node* nodeBox1 = nullptr;
        Node* nodeBox2 = nullptr;
        Node* tempPoint = head;


        for (int i = 1; i <= size; i++)
        {
            if (i == indx1) {
                nodeBox1 = tempPoint;
            }
            else if (i == indx2) {
                nodeBox2 = tempPoint;
            }
            //nodeBox1 = (i == indx1 ? tempPoint :  nullptr);
            //nodeBox2 = (i == indx2 ? tempPoint :  nullptr);
            tempPoint = tempPoint->next;
        }


        if (nodeBox1 != nullptr && nodeBox2 != nullptr) {
            int dataBox = nodeBox1->data;
            nodeBox1->data = nodeBox2->data;
            nodeBox2->data = dataBox;
        }


        else {
            std::cout << "SomeTHingWRONG\n";
        }
    }

    Node* head;                // ��������� �� ������ ������
    int size;

private:
    //    Node* head;                // ��������� �� ������ ������
    //   int size;
};






void openProgramMenu();

void chooseYourCountry();

void addSomeElementsToArray();

void arithmeticMean();

void max_min_Deque();

void dBlinked_list();

void NameByNumber(int num);

void dequeOfStrings();

void first_last_swap();

void onlyEvenReverse();

void sigle_linked_list();

void dop1_Vector();

void dop2_Deque();

void dop3_Array();

void testBitset();

void simple_numbers();

void sum_of_nearest();

void deque_again();

std::string genLine(int size, std::string components);

int NOD();

int Mediana(vector<int> vec);

void BiggerThanMiddle();