#include <iostream>
using namespace std;
#include "dog.h"

int main() {
  cout << "hello world\n";

  Dog puppy;
  puppy.getInfo();

  cout << "the name of the puppy is" << puppy._name << endl;

  Dog mutt("Hunter", 11, "German shepherd");
  mutt.getInfo();

  return 0;
}
