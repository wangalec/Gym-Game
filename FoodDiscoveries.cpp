#include "Foods.h"
#include "Exercises.h"

#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

#include "FoodDiscoveries.h"

FoodDiscoveries::FoodDiscoveries(){
    num_foods_ = 0;
    num_foods_found_ = 0;
}

//adds to found exercises 
int FoodDiscoveries::getNumFoodsFound(){
    return num_foods_found_;
}

string FoodDiscoveries::getFoodName(int index){
    return found_foods_[index].getName();
}

int FoodDiscoveries::getFoodStrength(int index){
    return found_foods_[index].getStrength();
}

bool FoodDiscoveries::addFoods(string name, int strength){
    if(num_foods_found_ > 5) return false;
    found_foods_[num_foods_found_] = Foods(name, strength);
    num_foods_found_++;
    return true;
}

string FoodDiscoveries::getAvailFoodName(int index){
    return foods_[index].getName();
}

//adds to foods array
int FoodDiscoveries::readFoods(string filename){
    if (num_foods_ == 5) return -1;
    string line;
    ifstream input;
    input.open(filename);

    if(input.fail()) return -1;

    while(getline(input, line)){
        string arr[2];
        for(int i = 0; i < line.length(); i++){
            if (line[i] == ','){
                arr[0] = line.substr(0,i);
                arr[1] = line.substr(i+1,1);
            }
        }
        foods_[num_foods_] = Foods(arr[0], stoi(arr[1]));
        num_foods_++;
        if (num_foods_ == 5) return 0;
    }
    input.close();
    return 1;
}

