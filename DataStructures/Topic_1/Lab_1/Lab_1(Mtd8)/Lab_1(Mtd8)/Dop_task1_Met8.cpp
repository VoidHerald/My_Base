//1.���������� ��� ������� ����� ����� � ���� � �������� ��� ��������, ��������� ������. (3 �����)



#include "Header.h"
using namespace std;

void dop1_Vector()
{
    setlocale(LC_ALL, "Russian");
    vector <int> vec; 
    array arr1 = { 1,2,3,4,5,6,7,8,9 };            //������� ������ arr1
    array arr2 = { -1,-2,-3,-4,-5,-6,-7,-8,-9 };   //������� ������ arr1


    /*������� ������ arr1 � �������*/
    cout << "   ������ arr1 : " << endl;
    for (int elem : arr1) {
        cout << " [" << elem << "] ";
    }
    cout << endl << endl;
    _getch();



    /*������� ������ arr2 � �������*/
    cout << "   ������ arr2 : " << endl;
    for (int elem : arr2) {
        cout << " [" << elem << "] ";
    }
    cout << endl << endl;


    _getch();

    /*��������� ������� � �������, �� ������� ��������� �������� begin,
    �������� �� ������� ���������� �� ��������� ����� ����������� begin � end */
    vec.insert(vec.begin(), arr1.begin(), arr1.end());


    /*��������� ������� � �������, �� ������� ��������� �������� end,
    �������� �� ������� ���������� �� ��������� ����� ����������� begin � end */
    vec.insert(vec.end(), arr2.begin(), arr2.end());


    //  ������� �������� ������� �� �������
    cout << "   ������ vec ����������  �� �������� �������� arr1 � arr2 : " << endl << '\t';
    for (int elem : vec) {
        cout << " [" << elem << "] ";
    }
    _getch();
}