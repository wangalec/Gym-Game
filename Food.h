#ifndef FOOD_H
#define FOOD_H

#include <iostream>
using namespace std;

class Food{
    private:
    string name_;
    
    public:
    Food();
    string getName();
    void setName(string name);
};

#endif