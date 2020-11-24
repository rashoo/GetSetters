//
// Created by Raju on 11/24/2020.
//

#ifndef GETSETTERS_PERSON_H
#define GETSETTERS_PERSON_H

#include <iostream>
using namespace std;
class Person{
private:
    string name;
public:
    Person();
    string toString();

    void setName(string newName);
    string getName();
};


#endif //GETSETTERS_PERSON_H
