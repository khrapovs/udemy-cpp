#include <iostream>
#include "Dog.h"

Dog test_dog() {
//---- WRITE YOUR CODE BELOW THIS LINE----

    Dog fido {"Fido", 4};
    Dog spot {"Spot", 5};
    cout << fido.get_name() << endl;
    cout << fido.get_age() << endl;
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