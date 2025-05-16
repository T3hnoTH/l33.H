#pragma once
#include <iostream>
#include <string>
#include "Exceptions.h"
using namespace std;

class Animal{
	string name;
	bool isPredator;
public:
	Animal(){
		name = "undefined";
		isPredator = false;
	};
	Animal(string uname, bool uisPredator){
		setName(uname);
		isPredator = uisPredator;
	};

	void setName(string uname){
		if(uname == " " || uname == "") throw new NameException("Пусто.", "_");
		name = uname;
	};
	string getName()const{return name;};

	void setIsPredator(bool uisPredator){isPredator = uisPredator;};
	bool getIsPredator()const{return isPredator;};

	virtual void showInfo()const{
		cout << "Name: " << name << endl;
		cout << "Is predator: " << boolalpha << isPredator << endl;
	};
};

