#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

void Soldier::attack(Unit &target) // implementation of virtual function
{
     // after the soldier attacks, the new health of the target is the old health minus the damage
    target.take_hit(damage);
}
void Soldier::heal(Unit &target)
{
    // Soldiers can't heal
}

const int Soldier::getDamage() // implementation of const member function
{
    return damage; // return the value of the private member variable
}
