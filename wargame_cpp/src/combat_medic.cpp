#include "combat_medic.hpp"
#include <iostream> // For std::cout

// CombatMedic constructor
CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{    
}

//Using the abstract class from unit.hpp = pure-virtual 
void CombatMedic::heal(Unit &target)
{
    //Asserting target health is above 0 with object function get_health
    if(target.get_health() <= 0){
        std::cout << "He is gone..."; 
    }
    else{
        //Setting new target health
        target.set_health(target.get_health() + 10);
        std::cout << "He is healed";
    }
}