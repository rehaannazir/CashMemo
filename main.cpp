#include <iostream>
#include <iomanip>
#include "cashmemo.h"
#include <string>

using namespace std;

int main()
{
    try
    {
        CashMemo c;
        c.addNumber();
        c.addDate();
        c.addName();
        c.addAddress();
        c.addSize();
        c.addParticular();
        c.addQuantity();
        c.addRate();
        c.addAmount();
        cout << "                    MOBILO" << endl;
        cout << endl;
        cout << "                  MOBILE CITY" << endl;
        cout << "      DEALS IN ALL KINDS OF MOBILE & ACCESSORIES" << endl;
        cout << c << endl;
    }
    catch (const string &str)
    {
        cerr << str << endl;
    }

    return 0;
}