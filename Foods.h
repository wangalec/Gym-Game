#ifndef FOODS_H
#define FOODS_H

#include "Food.h"

#include <iostream>
using namespace std;

class Foods
{
    private: 
    const int food_count = 5;
    Food foods_[food_count]; 
    int num_foods_;

    public: 
    int getNumFoods(string);
    void setNumFoods(string);
};

#endif