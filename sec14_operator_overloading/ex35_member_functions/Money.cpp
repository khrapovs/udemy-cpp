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

Money operator+(const Money &lhs, const Money &rhs) {
    return Money {100 * (lhs.dollars + rhs.dollars) + lhs.cents + rhs.cents};
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR METHOD DEFINITIONS BELOW THIS LINE----



//----WRITE YOUR METHOD DEFINITIONS ABOVE THIS LINE----


int main() {
    Money money1 {Money(50)};
    money1.display();
    Money money2 {Money(50, 1)};
    money2.display();
    cout << boolalpha;
    cout << "Are equal: " << (money1 == money2) << endl;
    cout << "Are equal: " << (Money(10) == Money(10)) << endl;
    cout << "Are equal: " << (Money(10) != Money(10)) << endl;
    cout << "Are equal: " << (Money(10) != Money(10, 1)) << endl;

    const Money &money3 = Money(2, 50);
    const Money &money4 = Money(5, 75);
    (money3 + money4).display();
    return 0;
}