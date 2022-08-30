#include <iostream>
#include "Dog.h"

Dog test_dog() {
//---- WRITE YOUR CODE BELOW THIS LINE----

    Dog spot;
//    string name {"Spot"};
//    spot.set_name(name);
//    spot.set_age(5);
    cout << spot.get_name() << endl;
    cout << spot.get_age() << endl;
//    cout << spot.get_human_years() << endl;
//    cout << spot.speak() << endl;

//---- WRITE YOUR CODE ABOVE THIS LINE----
//---- DO NOT CHANGE THE CODE BELOW----
    return spot;
}

int main() {
    test_dog();
    return 0;
};