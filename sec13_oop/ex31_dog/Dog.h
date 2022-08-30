#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:

//---- WRITE YOUR CLASS FUNCTIONS BELOW THIS LINE----

    string get_name() {return name;}
    void set_name(string &dog_name) {name = dog_name;}
    int get_age() {return age;}
    void set_age(int dog_age) {age = dog_age;}
    int get_human_years() {return age * 7;}
    string speak() {return "Woof";}
//---- WRITE YOUR CLASS FUNCTIONS ABOVE THIS LINE----
};
#endif
