#ifndef PIRATE
#define PIRATE
#include <string>

class Pirate {
private:
  int alcohol_level;
  std::string name;
  bool alive;
  bool passed_out;
  void die();
  int randomNumGenerator();
public:
  Pirate(std::string name);
  void drinkSomeRum();
  void howsItGoingMate();
  void brawl(Pirate pirate);
};

#endif
