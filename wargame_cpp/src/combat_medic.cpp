#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
}
// implementation of virtual function - heal
void CombatMedic::heal(Unit &target)
{
    // variable to store the current health of the target, that the medic is trying to heal
    int current_health = target.get_health(); 

    if (current_health <= 0) // if the target is dead
    {
        // target is dead, so we can't heal them
    }
    else // if the target is alive
    {
        // add 10 health points
        target.set_health(current_health + 10);
    }
}