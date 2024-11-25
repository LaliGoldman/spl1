#include "Settlement.h"

// Constructor implementation
Settlement::Settlement(const string &name, SettlementType type): name(name), type(type){}

// Getter for name
const string & Settlement::getName() const {
    return name;
}


// Getter for type8
SettlementType Settlement::getType() const {
    return type;
}

const string Settlement::toString() const{
    if (SettlementType::CITY == type)
        return "Settlement name: " + name + "Settlement type: CITY";
    if (SettlementType::METROPOLIS== type)
        return "Settlement name: " + name + "Settlement type: METROPOLIS";
    if (SettlementType::VILLAGE== type)
        return "Settlement name: " + name + "Settlement type: VILLAGE";
}


