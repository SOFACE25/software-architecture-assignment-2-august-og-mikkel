#include "soldier.hpp"

// Soldier-constructor
Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

void Soldier::attack(Unit &target)
{
    target.take_hit(this->damage); //using inhereted target function take_hit 
}


//Soldiers cant heal, can be deleted...
void Soldier::heal(Unit &target)
{
    
}
