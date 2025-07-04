#include <iostream>
#include <string>
#include "cashmemo.h"

using namespace std;

Address::Address() : houseNo(0), block("N/A"), city("N/A"), postalCode(0) {}
Address::Address(int h, string b, string c, int p) : houseNo(h), block(b), city(c), postalCode(p) {}
void Address::addHouseNo()
{
    cout << "Enter House Number: ";
    cin >> houseNo;
}
void Address::addBlock()
{
    cout << "Enter further detail: ";
    getline(cin, block);
}
void Address::addCity()
{
    cout << "Enter name of City: ";
    cin >> city;
}
void Address::addPostalCode()
{
    cout << "Enter Postal Code: ";
    cin >> postalCode;
}
ostream &operator<<(ostream &str, Address &rhs)
{
    str << "Address: " << rhs.houseNo << ", " << rhs.block << ", " << rhs.city << ", " << rhs.postalCode << endl;
    return str;
}
istream &operator>>(istream &str, Address &rhs)
{
    cout << "Enter House No, Block, City, Postal Code" << endl;
    cin.ignore();
    str >> rhs.houseNo;
    getline(str, rhs.block);
    str >> rhs.city >> rhs.postalCode;
    return str;
}