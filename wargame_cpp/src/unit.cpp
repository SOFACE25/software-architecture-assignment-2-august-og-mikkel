#include "unit.hpp"

Unit::Unit(int health) : health(health)
{
}
const int Unit::get_health()
{
    return this->health;
}
void Unit::set_health(int health)
{
    this->health = health;
}
void Unit::take_hit(int damage)
{
    this->set_health((this->get_health()) - damage);
}