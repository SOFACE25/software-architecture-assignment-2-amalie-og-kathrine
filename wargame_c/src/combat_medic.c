#include "combat_medic.h"

void combat_medic_heal(Unit *self, Unit *target)
{
    if (unit_get_health(target) == 0) // target is dead, so we can't heal them
    {
        printf("He is gone...");
        return; // exit the function early
    }
    else
    {
        printf("Hang in there!");
        unit_set_health(target, unit_get_health(target) + 10);
    }
}

void make_combat_medic(CombatMedic *self, int health, int damage)
{
    make_soldier(&self->inherited, health, damage);
    self->inherited.inherited.vt->heal_target = combat_medic_heal;
}
