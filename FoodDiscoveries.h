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
    Food foods_[5]; 
    int num_foods_;

    Food found_foods_[5];
    //found foods that the player can use to gain strength
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
    int readFoods(string filename); 
};

#endif