#include "Facility.h"


FacilityType::FacilityType(const string &name, const FacilityCategory category, const int price, const int lifeQuality_score, const int economy_score, const int environment_score):
    name(name), category(category), price(price), lifeQuality_score(lifeQuality_score), economy_score(economy_score), environment_score(environment_score) {}

const string& FacilityType::getName() const{
    return name;
}

int FacilityType::getCost() const{
    return price;
}


int FacilityType::getLifeQualityScore() const{
    return lifeQuality_score;
}

int FacilityType::getEnvironmentScore() const{
    return environment_score;
}

int FacilityType::getEconomyScore() const{
    return economy_score;
}

FacilityCategory FacilityType::getCategory() const{
    return category;
}


Facility::Facility(const string &name, const string &settlementName, const FacilityCategory category, const int price, const int lifeQuality_score, const int economy_score, const int environment_score):
    FacilityType::FacilityType(name,category,price,lifeQuality_score,economy_score,environment_score),
    settlementName(settlementName), status(FacilityStatus::UNDER_CONSTRUCTIONS), timeLeft(price) {}


        // Facility(const FacilityType &type, const string &settlementName);
        // const string &getSettlementName() const;
        // const int getTimeLeft() const;
        // FacilityStatus step();
        // void setStatus(FacilityStatus status);
        // const FacilityStatus& getStatus() const;
        // const string toString() const;