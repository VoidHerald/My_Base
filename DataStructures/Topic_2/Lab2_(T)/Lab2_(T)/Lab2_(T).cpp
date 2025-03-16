#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>
#include <vector>
#include <map>
#include <deque>

using namespace std; 
int _stateMenu;

struct Сlient {
	string organization_name;
	string type_of_property;
	string adress;
	string phone_number;
	string contact_person;
	int id;
};

struct Creadit {
	string name;                 //Название/тип
    string size_of_credit;
	string conditions_of_receipt;//условия получения
	string interest_rate;        //процентная ставка
	string date_of_issue;        //дата выдачи
    int return_perion;           //срок возврата
};

struct Node {
	Сlient  Nodklient;
	deque<Creadit> Nodcredits;
};

void Menu() {
    system("cls"); // очистка консоли
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << "      " << "\033[31mЦветное меню\033[0m" << "        " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m1.\033[0m" << " Добавление клиента    " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m2.\033[0m" << " Выдать кредит         " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m3.\033[0m" << " Вывод клиентов        " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m4.\033[0m" << " Вывод кредитов        " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m5.\033[0m" << " Обнуление кредита     " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " " << "\033[32m6.\033[0m" << " Выход                 " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << " Выберите пункт меню:  "; cin >> _stateMenu; cout << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
}

//Функция хеширования от имени клиента(string)(плохая но сойдет)
int HashFunc(std::string toHash) {
    int Hash = 0;
    int iter = 66;
    //Умножаем код символа на число от 1 до 20 и прибавляем к сумме
    for (auto chr : toHash) {
        Hash += static_cast<int> (chr) * iter;
        iter = static_cast<int> (chr) % 21;
    };
    return Hash;
};


//Функция вычисления суммы всех кредитов (Для вывода молной информации)
int SumOfCredits(deque<Creadit> credits) {
    int creditSum = 0;
    //Достаем из дека средитов обьект кредита и обращаемся к нужному полю размера
    for (auto cred : credits) {
        //creditSum += atoi((cred.size_of_credit).c_str());
        //Ссумируем размер каждого кредита
        creditSum += stoi(cred.size_of_credit);
    }
    //Возвращаем сумму кредитов
    return creditSum;
}


//Функция добавления нового клиента
Сlient* NewClient() {
    //Создаем обьект клиента и с помощью запросов его заполняем
    Сlient* nСlient = new Сlient;
    cout << "\033[34m+--------------------------+\033[0m" << endl;
    cout << "\033[34m|\033[0m" << "     " << "\033[31mДобавление клиента\033[0m" << "   " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m+--------------------------+\033[0m" << endl;
    cout << "\033[3;33m Введите имя организации: "<< "\033[0m " << "\033[3;36m";
    cin >> nСlient->organization_name; cout << endl;
    cout << "\033[3;33m Введите тип имущества:  " << "\033[0m " << "\033[3;36m";
    cin >> nСlient->type_of_property; cout << endl;
    cout << "\033[3;33m Введите адрес: " << "\033[0m " << "\033[3;36m";
    cin >> nСlient->adress; cout << endl;
    cout << "\033[3;33m Введите номер телефона: " << "\033[0m " << "\033[3;36m";
    cin >> nСlient->phone_number; cout << endl;
    cout << "\033[3;33m В ведите Контактное Лицо: " << "\033[0m " << "\033[3;36m";
    cin >> nСlient->contact_person; cout << endl;
    nСlient->id = HashFunc(nСlient->organization_name);
    //Возвращаем обьект кредита
    return nСlient;
};


//Функция выдачи кредита на имя клиена
Creadit* IssueCreadit() {
    //Создаем и заполняем обьект кредита
    Creadit* nCreadit = new Creadit;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << "      " << "\033[31mВыдача кредита\033[0m" << "      " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[3;33m  Введите тип кредита:  \033[0m\033[3;36m";
    cin >> nCreadit->name;
    cout << endl;
    cout << "\033[3;33m  Введите размер:  \033[0m\033[3;36m";
    cin >> nCreadit->size_of_credit;
    cout << endl;
    cout << "\033[3;33m  Условия получения:  \033[0m\033[3;36m";
    cin >> nCreadit->conditions_of_receipt;
    cout << endl;
    cout << "\033[3;33m  Процентная ставка: \033[0m\033[3;36m";
    cin >> nCreadit->interest_rate;
    cout << endl;
    cout << "\033[3;33m  Дата выдачи:\033[0m\033[3;36m";
    cin >> nCreadit->date_of_issue;
    cout << endl;
    cout << "\033[3;33m  Срок возврата: \033[0m\033[3;36m";
    cin >> nCreadit->return_perion;
    cout << endl;
    return nCreadit;
};


//Функция выдачи информации о клиенте
void clOutput(Сlient toOut) {
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << "   " << "\033[31mИнформация о клиенте\033[0m" << "   " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[3;33m Имя Орг.:    \033[3;32m" << toOut.organization_name<<"\033[0m" << endl;
    cout << "\033[3;33m Адрес Орг.:   \033[3;32m" << toOut.adress << "\033[0m" << endl;
    cout << "\033[3;33m Контакт Орг.:  \033[3;32m" << toOut.contact_person << "\033[0m" << endl;
    cout << "\033[3;33m Тел.Номер Орг.: \033[3;32m" << toOut.phone_number << "\033[0m" << endl;
    cout << "\033[3;33m Имущество Орг.:  \033[3;32m" << toOut.type_of_property << "\033[0m" << endl;
    cout << "\033[3;33m ID Орг.:          \033[3;32m" << toOut.id << endl;
}


//Функция выдачи информации о кредите
void crOutput(Creadit toOut) {
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << "\033[34m |\033[0m" << "  " << "\033[31mИнфорамация о кредите\033[0m" << "   " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
    cout << " Название кредита.:  " << toOut.name<<endl;
    cout << "\033[34m ----------------------------\033[0m" << endl;
    cout << " Размер кредита.:  " << toOut.size_of_credit << endl;
    cout << "\033[34m ----------------------------\033[0m" << endl;
    cout << " Процнтная ставка.:  " << toOut.interest_rate << endl;
    cout << "\033[34m ----------------------------\033[0m" << endl;
    cout << " Условия получения.:  " << toOut.conditions_of_receipt << endl;
    cout << "\033[34m ----------------------------\033[0m" << endl;
    cout << " Дата выдачи.:  " << toOut.date_of_issue << endl;
    cout << "\033[34m ----------------------------\033[0m" << endl;
    cout << " Время возврата.:  " << toOut.return_perion<<endl;
    cout << "\033[34m +--------------------------+\033[0m" << endl;
}

//Функция вывода полной информации о клиенте (+ кредиты)
void AllClientInfo(map<int, Node>* DB,string org_name) {
    Node clientNode = (*DB)[HashFunc(org_name)];
    clOutput(clientNode.Nodklient);
    cout << "\033[34m+-----------------------------------+\033[0m" << endl;
    cout << "   " << "\033[31mСумма всех кредитов:  \033[32m "<< SumOfCredits(clientNode.Nodcredits) <<"   " << "\033[0m" << endl;
    cout << "\033[34m+-----------------------------------+\033[0m" << endl;
    cout << "\033[34m+--------------------------------------------------------------+\033[0m" << endl;
    cout << "\033[34m|\033[0m" << "                    " << "\033[31mВсе кредиты организации\033[0m" << "                   " << "\033[34m|\033[0m" << endl;
    cout << "\033[34m+--------------------------------------------------------------+\033[0m" << endl;

    for (auto credit : clientNode.Nodcredits) {
        crOutput(credit);
    }
    
}


//Функция вывода всех клиентов с поверхностной информцией
void ListOfClients(map<int, Node>*DB) {

    for (const auto& Nd : *DB) {
        auto curClient = Nd.second.Nodklient;
        cout << " Имя Орг.:  " << curClient.organization_name;
        cout << " Кол-во кредитов.:  " << Nd.second.Nodcredits.size();
        cout << " id Орг.:  " << curClient.id << endl;
    }
};

/*
void ListOfCredits() {

};
*/

int main()
{
    map<int, Node> DataBase;
    setlocale(LC_ALL, "rus");
    Menu();

    while (_stateMenu != 0) {

        switch (_stateMenu)
        {
        case 1: {
            system("cls"); // очистка консоли

            Сlient* tempK = NewClient();//Создаём обьект клиента

            Node* tempN = new Node;// Создаем структуру Node  которая состит из {Client,deque<Creadit>}
            tempN->Nodklient = *tempK;//Заполняем обьект Node структурой Client
            DataBase[HashFunc(tempK->organization_name)] = *tempN;//Добавляем новый элемент Node под ключём из HashFunc
            cout <<"\033[32mКлиент добавлен\033[0m" << endl<<endl;
            system("pause"); // задержка консоли
            Menu();
            break;
        }
        //Добавление  кредита организации по имени
        case 2: {
            system("cls");
            string orgNameForCreadit;
            cout << "\033[34m +------------------------------+\033[0m";
            cout <<endl<<endl<< "\033[3;33m     Введите имя организации:  \033[0m \033[3;33m";
            cin >>orgNameForCreadit;
            cout << endl << endl << "\033[34m +------------------------------+\033[0m" << endl;
            cout << endl;
            DataBase[HashFunc(orgNameForCreadit)].Nodcredits.push_back(*(IssueCreadit()));
            system("pause");
            Menu();
            break;
        }
        //Вывод всех клиентов
        case 3: {
            system("cls");
            ListOfClients(&DataBase);
            system("pause");
            Menu();
            break;
        }
        //Вывод всей информации о клиенте
        case 4: {
            system("cls");
            string orgNameForCreadit;
            cout << "\033[34m +------------------------------+\033[0m";
            cout << endl << endl << "\033[3;33m     Введите имя организации:  \033[0m \033[3;33m";
            cin >> orgNameForCreadit;
            cout << endl << endl << "\033[34m +------------------------------+\033[0m" << endl;
            AllClientInfo(&DataBase, orgNameForCreadit);
            system("pause");
            Menu();
            break;
        }
        case 5: {
            system("cls");
            ListOfClients(&DataBase);
            system("pause");
            Menu();
            break;
        }

        case 6: {
            system("cls");
            ListOfClients(&DataBase);
            system("pause");
            Menu();
            break;
        }
        default:
            system("cls");
            cout << "Неверно введен номер действия!" << endl;
            system("pause");
            Menu();
            break;
        }
    }
    return 0;
}
