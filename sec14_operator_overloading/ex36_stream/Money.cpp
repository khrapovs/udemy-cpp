#include <iostream>
#include "Money.h"

using namespace std;

Money::Money(int dollars, int cents) : dollars{dollars}, cents{cents} {}

Money::Money(int total) : dollars {total/100}, cents{total%100}  {}

bool Money::operator==(const Money &rhs) const {
    return ((dollars == rhs.dollars) & (cents == rhs.cents));
}
bool Money::operator!=(const Money &rhs) const {
    return ((dollars != rhs.dollars) | (cents != rhs.cents));
}
ostream &operator<<(ostream &os, const Money &rhs) {
    os << "dollars: " << rhs.dollars << " cents: " << rhs.cents << endl;
    return os;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


int main() {
    Money money1 {50};
    cout << money1;
    Money money2 {50, 1};
    cout << money2;
    return 0;
}