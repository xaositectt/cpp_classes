#include "dog.h"
#include <iostream>
#include <string>

Dog::Dog() {
_name = "Dogmeat";
_type = "stray";
_age = 11;
}

Dog::Dog(std::string name, int age, std::string type) {
_name = name;
_type = type;
_age = age;
}

void Dog::getInfo() {
  std::cout << "the name is: " << _name << std::endl
            << "the age is: " << _age << std::endl
            << "the type is: " << _type << std::endl;
}
