#ifndef _MONEY_MONEY_H
#define _MONEY_MONEY_H


#include <iostream>

using namespace std;

class Money {
    int dollars;
    int cents;
public:
    Money(int dollars, int cents);
    Money(int total);

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR METHOD DECLARATIONS BELOW THIS LINE----

    bool operator==(const Money &rhs) const;
    bool operator!=(const Money &rhs) const;
    friend Money operator+(const Money &lhs, const Money &rhs);

    void display() { cout << "Dollars: " << dollars << ", Cents: " << cents << endl; };
    //----WRITE YOUR METHOD DECLARATIONS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
};


#endif //_MONEY_MONEY_H