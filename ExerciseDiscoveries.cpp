#include "Food.h"
#include "Exercises.h"

#include <fstream>
#include <iostream>
using namespace std;

class ExerciseDiscoveries{
    
    private: 
    Food foods_[5]; 
    int num_foods_;

    Food found_foods_[5];
    int num_foods_found_;

    //possbile exercises
    Exercises exercises_[10];
    int num_exercises_;

    //found exercises that the play can use
    Exercises found_exercises_[10];
    int num_exercises_found_;


    public: 
    string getFood(int index);
    bool addFood(string food, int index);
    
    int readFoods(string filename);

    //changes found exercises 
    string getExerciseName(int index);
    int getExerciseStrength(int index);
    bool addExercise(string name, int strength);
    
    //read exersises into exercises array
    int readExercises(string filename); 

};

//adds to found exercises 
string ExerciseDiscoveries::getExerciseName(int index){
    return found_exercises_[index].getName();
}

int ExerciseDiscoveries::getExerciseStrength(int index){
    return found_exercises_[index].getStrength();
}

bool ExerciseDiscoveries::addExercise(string name, int strength){
    if(num_exercises_found_ > 10) return false;
    found_exercises_[num_exercises_found_] = Exercises(name, strength);
    num_exercises_found_++;
}

//adds to exercises array
int ExerciseDiscoveries::readExercises(string filename){
    if (num_exercises_ == 10) return -1;
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
        exercises_[num_exercises_] = Exercises(arr[0], stoi(arr[1]));
        num_exercises_++;
        if (num_exercises_ == 10) return 0;
    }
    return 1;
}
