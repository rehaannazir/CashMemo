#include <iostream>
#include <iomanip>
#include <string>
#include <array>
#include "cashmemo.h"

using namespace std;

CashMemo::CashMemo()
{
    this->number = "N/A";
    this->name = "N/A";
    this->N = 0;
    date;
    address;
}
CashMemo::CashMemo(string num, Date d, string n, Address a, int sz)
{
    this->number = num;
    this->date = d;
    this->name = n;
    this->address = a;
    this->N = sz;

    for (int i = 0; i < N; i++)
    {
        quantity[i] = i++;
        particulars[i] = "Item";
        rate[i] = 0.0;
        amount[i] = 0.0;
    }
}
void CashMemo::addNumber()
{
    cout << "Enter receipt Number: ";
    cin >> number;
}
void CashMemo::addDate()
{
    cin >> date;
}
void CashMemo::addName()
{
    cout << "Enter receipent Name: ";
    cin.ignore();
    getline(cin, name);
}
void CashMemo::addAddress()
{
    cout << "Enter Address: ";
    cin >> address;
}
void CashMemo::addSize()
{
    cout << "Enter no of Items: ";
    cin >> N;
}
void CashMemo::addParticular()
{
    cout << "Enter your " << N << " items: " << endl;
    cin.ignore();
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << ". ";
        getline(cin, particulars[i]);
    }
}
void CashMemo::addQuantity()
{

    for (int i = 0; i < N; i++)
    {
        cout << "Enter quantity of "
             << particulars[i] << ": ";
        cin >> quantity[i];
        cout << endl;
    }
}
void CashMemo::addRate()
{
    for (int i = 0; i < N; i++)
    {
        cout << "Enter rate of "
             << particulars[i] << ": ";
        cin >> rate[i];
        cout << endl;
    }
}
void CashMemo::addAmount()
{
    for (int i = 0; i < N; i++)
    {
        amount[i] = quantity[i] * rate[i];
    }
}
ostream operator<<(ostream &str, CashMemo &rhs)
{
    double t = 0;
    str << left << "No. " << rhs.number << setw(50 / 2) << right << rhs.date << endl;
    str << "Name: " << rhs.name << endl;
    str << rhs.address << endl;
    str << left << setw(15) << "Quantity" << setw(15) << "Particulars" << setw(15) << "Rate" << setw(15) << "Amount" << endl;
    for (int i = 0; i < rhs.N; i++)
    {
        str << left << setw(15) << rhs.quantity[i]
            << setw(15) << rhs.particulars[i]
            << setw(15) << rhs.rate[i]
            << setw(15) << rhs.amount[i] << endl;
        t += rhs.amount[i];
    }
    str << endl;
    str << right << setw(45) << "Total: " << t << endl;
    cout << endl;
    cout << "Address: Basement # 2. Allah wala Plaza, G-9 Markaz, Islamabad" << endl;
}