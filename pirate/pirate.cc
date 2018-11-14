#include "pirate.h"
#include <iostream>
#include <string>

Pirate::Pirate(std::string name)
{
  this->name = name;
  this->alcohol_level = 0;
  this->alive = true;
  this->passed_out = false;
}

void Pirate::die()
{
  std::cout << this->name << " dies:(\n";
  this->alive = false;
}

void Pirate::drinkSomeRum()
{
  if (this->alive && !this->passed_out)
  {
    std::cout << this->name << " drinks some rum.\n ";
    this->alcohol_level += 1;
  }
  else if (this->alive && this->passed_out)
  {
    std::cout << "the pirate can't drink while passed out.\n ";
  }
  else
  {
    std::cout << "dead pirates can't drink.\n ";
  }
}

void Pirate::howsItGoingMate()
{
  if (this->alive && !this->passed_out)
  {
    if (this->alcohol_level < 5)
    {
      std::cout << "Pour me anudder!" << this->name << " needs his drink!\n";
    }
    else
    {
      std::cout << "Arghh, I'm" << this->name << " and I'm wasted. How d'ya d'ink its goin?\n";
      std::cout << "the pirate passes out.\n";
      this->passed_out = true;
    }
  }
  else if (this->alive && this->passed_out)
  {
    std::cout << "the pirate is passed out, he's doing well.\n ";
  }
  else
  {
    std::cout << "dead pirates aren't doing particularly well.\n ";
  }
}

void Pirate::brawl(Pirate pirate)
{
  bool oneInThree = ((rand() % 3) + 1) == 1;
  bool bothAlive = this->alive && pirate.alive;
  if (bothAlive)
  {
    std::cout << "both pirates are alive\n";
    std::cout << "does one of them die?\n";

    if (oneInThree) {
      bool oneInTwo = ((rand() % 2) + 1) == 1;
      std::cout << "yes:(\n";
      if (oneInTwo == 0) {
        this->die();
      } else {
        pirate.die();
      }
    } else {
      std::cout << "not today:)\n";
    }
  } else {
    std::cout << "can't fight, a pirate is dead.\n";
  }
}
