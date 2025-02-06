#include "combat_medic.hpp"
#include <iostream>
using namespace std;

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{    
}

void CombatMedic::heal(Unit &target)
{
    if(target.get_health() <= 0){
        std::cout << "He is gone..." << endl; 
    }
    else{
        target.set_health(target.get_health() + 10);
        std::cout << "He is healed";
    }
}