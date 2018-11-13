#ifndef DOG
#define DOG
#include <string>

class Dog {
private:
  std::string _name;
  int _age;
  std::string _type;
public:
  Dog();
  Dog(std::string name, int age, std::string type);
  void getInfo();
};

#endif
