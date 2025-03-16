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
    int data;                   // Значение узла
    Node* next;                 // Указатель на следующий элемент
};

class LinkedList {
public:
    LinkedList() {             // Конструктор класса LinkedList
        head = nullptr;           // Устанавливаем указатель на голову списка в NULL
        size = 0;
    }
    void insert(int value) {   // Метод класса для вставки нового элемента в список
        Node* newNode = new Node;   // Создаем новый узел списка
        newNode->data = value;      // Задаем значение для нового узла
        newNode->next = head;       // Новый узел ссылается на текущую голову списка
        head = newNode;             // Устанавливаем новый узел как новую голову списка
        size += 1;
    }

    void printList() {          // Метод класса для печати списка на экран
        Node* temp = head;      // Создаем временный указатель на голову списка
        while (temp != nullptr) {  // Пока не достигнут конец списка
            std::cout << temp->data << " ";  // Выводим значение текущего узла списка на экран
            temp = temp->next;           // Переходим к следующему узлу списка
        }
    }

    void clearList() {

        for (int i = 0; i <= size; i++) {
            Node* toDelete = head;  // Сохраняем указалель на текущую голову списка 
            head = head->next;     // Переводим указатель head на следующий элемент
            delete toDelete;      //  Очищаем память выделенную для элемента
        }
        head->next = nullptr;      //  Присваиваем указателю на глову списка изначальное значение nullptr
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

    Node* head;                // Указатель на голову списка
    int size;

private:
    //    Node* head;                // Указатель на голову списка
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