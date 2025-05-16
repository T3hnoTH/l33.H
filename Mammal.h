#pragma once
#include "Animal.h"

class Mammal : public Animal{   
    string habitat;
public:
    Mammal(){
        habitat = "undefined";
    };
    Mammal(string uname, bool uisPredator, string uhabitat):Animal(uname, uisPredator){
        habitat = uhabitat;
    };

    void setHabitat(string uhabitat){habitat = uhabitat;};
    string getHabitat()const{return habitat;};

    virtual void showInfo()const override{
        cout << "==Mammal==\n";
        Animal::showInfo();
        cout << "Habitat: " << habitat << endl;
    };

};

