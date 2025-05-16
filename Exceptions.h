#pragma once
#include <string>
using namespace std;

class ZooException{
protected:
    string text;
public:
    ZooException(string utext){text  = utext;};
    virtual ~ZooException(){};
    virtual string showMessage()const = 0;
};
//////////////////////////////////////
class NameException : public ZooException{
private:
    string name;
public:
    NameException(string utext, string uname) : ZooException(utext){
        name = uname;
    }
    string showMessage()const{
        return "NameException ( " + name + " ) " + text;
    }
};
//////////////////////////////////////
class MaxCapacityException : public ZooException{
private:
    int capacity;
public:
    MaxCapacityException(string utext, int ucapacity) : ZooException(utext){
        capacity = ucapacity;
    }
    string showMessage()const{
        return "MaxCapacityException ( " + std::to_string(capacity) + " ) " + text;
    }
};
//////////////////////////////////////
class PredatorException : public ZooException{
private:
    bool isPredator;
public:
    PredatorException(string utext, bool uisPredator) : ZooException(utext){
        isPredator = uisPredator;
    }
    string showMessage()const{
        return "PredatorException ( " + to_string(isPredator) + " ) " + text;
    }
};