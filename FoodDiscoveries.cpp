#include "Food.h"
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
    string getFoodName(int);
    int getFoodStrength(int);
    bool addFoods(string, int);
    
    //read foods into the foods array
    int readFoods(string filename);
};

string FoodDiscoveries::getFoodName(int index){
    return found_foods_[index].getName();
}

int FoodDiscoveries::getFoodStrength(int index){
    return found_foods_[index].getStrength();
}

bool FoodDiscoveries::addFoods(string name, int strength){
    if(num_foods_found_ > 5) return false;
    found_foods_[num_foods_found_] = Food(name, strength);
    num_foods_found_++;
}

//adds to exercises array
int FoodDiscoveries::readFoods(string filename){
    if (num_foods_ == 5) return -1;
    string line;
    ifstream input;

    if(input.fail()) return -1;

    while(getline(input, line)){
        string arr[2];
        for(int i = 0; i < line.length(); i++){
            if (line[i] == ';'){
                arr[0] = line.substr(0,i);
                arr[1] = line.substr(i,1);
            }
        }
        foods_[num_foods_] = Food(arr[0], stoi(arr[1]));
        num_foods_++;
        if (num_foods_ == 5) return 0;
    }
    return 1;
}

