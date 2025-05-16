#pragma once
#include "Animal.h"

class Fish : public Animal{   
    bool isDeepSea;
public:
    Fish(){
        isDeepSea = false;
    };
    Fish(string uname, bool uisPredator, bool uisDeepSea):Animal(uname, uisPredator){
        isDeepSea = uisDeepSea;
    };

    void setIsDeepSea(bool uisDeepSea){isDeepSea = uisDeepSea;};
    bool getIsDeepSea()const{return isDeepSea;};

    virtual void showInfo()const override{
        cout << "==Fish==\n";
        Animal::showInfo();
        cout << "Is deep sea: " << boolalpha << isDeepSea << endl;
    };

};

