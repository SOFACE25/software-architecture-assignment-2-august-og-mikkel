#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
    
}

void CombatMedic::heal(Unit &target)
{
    if (target.get_health() < 0)
    {
        std::cout << "He is gone";
    }
    else
    {
        printf("Hang in there!");
        unit_set_health(target, unit_get_health(target) + 10);
    }
}