#ifndef FOOD_H
#define FOOD_H

#include <iostream>
using namespace std;

class Food{
    private:
    string name_;
    int strength_;
    
    public:
    Food();
    string getName();
    void setName(string name);
    int getStrength();
    void setStrength(int strength);
};

#endif