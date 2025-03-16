#include "Header.h"
using namespace std;

/*��� ����� ���� ����������� �����  a>b  ����� ��������� ��������� : ���(a; b) = ���(a - b; b)*/
/*1.�������� ���������, ������� ����� �������� ���������� ����� ����-���� ���� �����. (3 �����)*/
int NOD() {
    cout << endl << "���" << endl;
    int a, b;
    cout << "������� ����� a: "; cin >> a; cout << endl;
    cout << "������� ����� b: "; cin >> b; cout << endl;
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    cout << "��� �����: "<<a<<endl;
    return a;
}

/*2. �������� ���������, ������� ����� �������� ������� ������� �����. (3 �����)*/
/*������� � ��� �����, ������� �������� ��������� ��������� �����,
�� ���� �������� ����� ����� �������� �������, ��� �������, � �������� 
����� ����� �������� �������, ��� �������.*/

int Mediana(vector<int> vec) {
    cout << endl << "������� �������:" << endl;
    for (auto elem : vec) {
        cout << " [" << elem << "] ";
    }cout << endl;
    int mid = vec.size() / 2;
    sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 1) {
        cout << "����� :" << vec[(mid)] << endl;
        return vec[ (mid)];
    }
    else {
        cout << "����� :" << (vec[mid] + vec[mid + 1]) / 2 << endl;
        return (vec[mid]+vec[mid+1])/2;
    }
}

/*
* �������� ���������, ������� ����������� � ������������ 10 ����� ����� � ��������� �� �
* ���������� array � STL C++. ����� ��������� ������ ��������� ������� �������������� ����
* ����� � ������� �� ����� ��� �����, ������� ������ �������� ���������������.
*/
void BiggerThanMiddle() {
    cout << endl << "����� ������ �������� ���������������" << endl;
    array<int, 10>Myarr;
    int sum=0;

    for (int i = 0; i < 10; i++) {
        cout << "������� " << i <<"� ������� �������: ";
        cin >> Myarr[i];
        sum += Myarr[i];
        cout << endl;
    }

    cout << endl;
    int mid = sum / 10;
    cout << "����� ������� ������ ������� ���������������: ";


    for (int i = 0; i < 10; i++) {
        if (Myarr[i] > mid) {
            cout << " " << Myarr[i];
        }
    }
}