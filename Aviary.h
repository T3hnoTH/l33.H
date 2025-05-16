#pragma once
#include "Bird.h"
#include "Fish.h"
#include "Mammal.h"
#include<vector>
using namespace std;

class Aviary{
	int num;
	int capacity;
	int amount;
	bool isPredator;
	vector<Animal*>aviary;
public:
	Aviary(int unum, int ucapacity, bool uisPredator){
		num = unum;
		capacity = ucapacity;
		amount = 0;
		isPredator = uisPredator;
	};

	void setNum(int unum){num = unum;};
	void setCapacity(int ucapacity){capacity = ucapacity;};

	int getNum()const{return num;};
	int getCapacity()const{return capacity;};
	int getAmount()const{return amount;};

	void showInfo()const{
		cout << "\tAVIARY #"  << num << endl;
		cout << "Capacity: " << capacity << endl;
		cout << "Amount: " << amount << endl;
		for (int i = 0; i < aviary.size(); i++) {
        	aviary[i]->showInfo();
        	cout << endl;
		}
	};

	void addAnimal(Animal* obj){
		if(obj->getIsPredator() != isPredator) throw new PredatorException("Нельзя подселить хищника к вольеру без хищников.", obj->getIsPredator());
		if(capacity == amount) throw new MaxCapacityException("Превышение количества животных в вольере.", capacity);
		aviary.push_back(obj);
		amount = aviary.size();
	};

	void searchAnimalByName(string name){
		for (int i = 0; i < amount; i++){
			if(aviary[i]->getName() == name){
				aviary[i]->showInfo();
				break;
			}
		}
	};

	void deleteAnimalByName(string name){
		for (int i = 0; i < amount; i++){
			if(aviary[i]->getName() == name){
				aviary.erase(aviary.begin()+i);
				break;
			}
		}
	};

	void searchByType(string type){
        for (int i = 0; i < aviary.size(); i++){
            if(type == "Bird"){
                if (typeid(*aviary[i]) == typeid(Bird)){
                    aviary[i]->showInfo();
                }
            }
            else if (type == "Fish"){
                if (typeid(*aviary[i]) == typeid(Fish)){
                    aviary[i]->showInfo();
                }
            }
            else if (type == "Mammal"){
                if (typeid(*aviary[i]) == typeid(Mammal)){
                    aviary[i]->showInfo();
                }
            }
            else{
                cout << "Ничего не найдёно." << endl;
            }
        }
	};
};

