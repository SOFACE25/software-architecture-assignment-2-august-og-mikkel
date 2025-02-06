#include "unit.hpp"

// Default implementations, as they serve both soldier and combatmedic
Unit::Unit(int health) : health(health)
{
}

const int Unit::get_health()
{
    return this->health; //Return health attribute
}


void Unit::set_health(int health)
{
    this->health = health; //Setting health with pointer to private attribute
}
void Unit::take_hit(int damage)
{
    this->set_health((this->get_health()) - damage); //Using objects own functions to change health
}