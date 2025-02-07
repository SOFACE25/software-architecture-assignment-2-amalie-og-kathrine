#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{
}

void Soldier::attack(Unit &target)
{
    target.take_hit(damage); // apply damage to target
}
void Soldier::heal(Unit &target)
{
    target.set_health(target.get_health() + damage); // måske skal det være getDamage() i stedet for damage
}

const int Soldier::getDamage()
{
    return damage;
}
