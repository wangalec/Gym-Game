#ifndef FOODS_D_H
#define FOODS_D_H

#include "Foods.h"
#include "Exercises.h"

#include <fstream>
#include <iostream>
using namespace std;

class FoodDiscoveries
{
    private: 
    //possible founds
    Foods foods_[5]; 
    int num_foods_;

    //found foods that the player can use to gain strength
    Foods found_foods_[5];
    int num_foods_found_;

    public:
    FoodDiscoveries();

    //changes found foods 
    int getNumFoodsFound();

    string getFoodName(int index);
    int getFoodStrength(int index);
    bool addFoods(string name, int strength);
    
    //read exersises into exercises array
    string getAvailFoodName(int index);
    int getAvailFoodStrength(int index);
    int readFoods(string filename); 
};

#endif