#include "Food.h"
#include "Foods.h"

#include <fstream>
#include <iostream>
using namespace std;

class FoodDiscoveries{
private:
    Food foods_[5]; 
    int num_foods_;

    Food found_foods_[5];
    int num_foods_found_;

public:

    FoodDiscoveries();
    //changes found Foods 
    int getNumFoodsFound();

    string getFoodName(int index);
    int getFoodStrength(int index);
    bool addFood(string name, int strength);
    
    //read exersises into Foods array
    string getAvailFoodName(int index);
    int readFoods(string filename); 

};