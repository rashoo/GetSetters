#include <iostream>
#include "Person.h"

using namespace std;

int main() {

    Person person;
    person.setName("UJAR");
    cout << person.toString() << endl;

    cout << person.getName();
    return 0;
}
