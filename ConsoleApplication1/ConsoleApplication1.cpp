#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;
struct Student
{
    int id{};
    string fio;
    int god_year{};
    char pol{};
    int weight{};
    float rost{};
    long long tel;
    string gruppa{};
    int stipendia{};
    string predmet[5];
    int mark[];
};

void Show(Student a) {

    cout << "ID = " << a.id << endl;
    cout << "FIO = " << a.fio << endl;
    cout << "GOD_YEAR = " << a.god_year << endl;
    cout << "POL = " << a.pol << endl;
    cout << "WEIGHT = " << a.weight << endl;
    cout << "ROST = " << a.rost << endl;
    cout << "TEL = " << a.tel << endl;
    cout << "GRUPPA = " << a.gruppa << endl;
    cout << "STIPENDIA = " << a.stipendia << endl;
    cout << "Predmeti" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << a.predmet << "\t";
    }
    cout << endl;

//    int sum = 0;
//    sum += mark[0];
//    for (int i = 0; i < 5; i++)
//    {
//
//    }
}

int Adult(Student a)
{
    if (2024 - a.god_year > 18)
    {
        cout << a.fio << "is adult" << endl;
    }
    else
    {
        cout << a.fio << "is not adult" << endl;
    }
    return 0;
}
int main()
{
    setlocale(LC_ALL, "RU");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Student s1 = { 1, "Гамидов Аслан Ильчинович", 2006, 'M', 70, 177, 89659564129, "2ОИБАС-1322", 1200, {"Математика","Информатика","Физика","Физ-ра","ОИБ"}, {5,2,4,5,5} };
    Adult(s1);
    Show(s1);
    return 0;
}
