//
// Created by Raju on 11/24/2020.
//

#include "Person.h"
Person::Person() {
    name = "Raju";
}

string Person::toString(){
    return "The person's name is: " + name;
}

void Person::setName(string newName){
    name = newName;
}
string Person::getName(){
    return "The name from the getter is: " + name;
}