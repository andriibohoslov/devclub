#include "Unit.h"
#include <iostream>

Unit::Unit(const std::string& name, int hitPointsLimit, int damage) {
    this->damage = damage;
    this->hitPointsLimit = hitPointsLimit;
    this->hitPoints = hitPointsLimit;
    this->name = name;
}

Unit::~Unit () {};

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
    return this->hitPoints;
}

int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}

const std::string& Unit::getName() const {
    return this->name;
}

void Unit::ensureIsAlive() {
    if ( this->hitPoints<1 ) {
        throw UnitIsDead();
    }
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    this->hitPoints += hp;
    if ( this->hitPoints > hitPointsLimit ) {
        this->hitPoints = hitPointsLimit;
    }
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    this->hitPoints -= dmg;
    if ( this->hitPoints <=0 ) {
        this->hitPoints = 0;
    }
}

void Unit::attack(Unit& enemy) {
    ensureIsAlive();
    enemy.takeDamage(damage);
    counterAttack(enemy);
}

void Unit::counterAttack(Unit& enemy) {
    enemy.ensureIsAlive();
    takeDamage(enemy.damage/2);
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Unit name is:" << unit.getName() << '\n';
    out << "Unit damage:" << unit.getDamage() << '\n';
    out << "Unit hit point limit:" << unit.getHitPointsLimit() << '\n';
    out << "Unit current hit point:" << unit.getHitPoints() << '\n';
}
