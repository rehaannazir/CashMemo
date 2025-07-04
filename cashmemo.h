#ifndef rehaaan_bsdsf24a042_pucit_lahore_edu_pk
#define rehaaan_bsdsf24a042_pucit_lahore_edu_pk

#include <string>
#include <array>

using namespace std;

constexpr int SIZE = 100;

class Date
{

    int day;
    int month;
    int year;

public:
    Date();
    Date(int, int, int);
    void addDay();
    void addMonth();
    void addYear();
    Date next();
    friend ostream &operator<<(ostream &str, Date &rhs);
    friend istream &operator>>(istream &str, Date &rhs);
};
class Address
{
    int houseNo;
    string block;
    string city;
    int postalCode;

public:
    Address();
    Address(int, string, string, int);
    void addHouseNo();
    void addBlock();
    void addCity();
    void addPostalCode();
    friend istream &operator>>(istream &str, Address &rhs);
    friend ostream &operator<<(ostream &str, Address &rhs);
};
class CashMemo
{
    string number;
    Date date;
    string name;
    Address address;
    array<double, SIZE> quantity;
    array<string, SIZE> particulars;
    array<double, SIZE> rate;
    array<double, SIZE> amount;
    int N;

public:
    CashMemo();
    CashMemo(string, Date, string, Address, int);
    void addNumber();
    void addDate();
    void addName();
    void addAddress();
    void addSize();
    void addQuantity();
    void addParticular();
    void addRate();
    void addAmount();
    friend ostream operator<<(ostream &str, CashMemo &rhs);
};

#endif