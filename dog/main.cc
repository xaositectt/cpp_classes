#include <iostream>
using namespace std;
#include "dog.h"

int main() {
  cout << "hello world" << endl;

  Dog puppy;
  puppy.getInfo();

  Dog mutt("Hunter", 11, "German shepherd");
  mutt.getInfo();

  return 0;
}
