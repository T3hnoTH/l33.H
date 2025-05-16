#pragma once
#include "Animal.h"

class Bird : public Animal{   
    float airspeed;
public:
    Bird(){
        airspeed = 0;
    };
    Bird(string uname, bool uisPredator, float uairspeed):Animal(uname, uisPredator){
        airspeed = uairspeed;
    };

    void setAirspeed(float uairspeed){airspeed = uairspeed;};
    float getAirspeed()const{return airspeed;};

    virtual void showInfo()const override{
        cout << "==Bird==\n";
        Animal::showInfo();
        cout << "Аirspeed: " << boolalpha << airspeed << endl;
    };

};

