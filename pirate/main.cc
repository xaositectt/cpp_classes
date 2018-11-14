#include <iostream>
using namespace std;
#include "pirate.h"

int main() {
  Pirate Jack("Jack");
  Pirate Joe("Joe");
  Pirate James("James");
  Jack.howsItGoingMate();
  Joe.howsItGoingMate();

  for (int i = 0; i < 10; i++) {
    Jack.drinkSomeRum();
  }

  Jack.howsItGoingMate();
  Jack.howsItGoingMate();

  Joe.brawl(James);
  Joe.brawl(James);
  Joe.brawl(James);
  Joe.brawl(James);
  Joe.brawl(James);

  return 0;
}
