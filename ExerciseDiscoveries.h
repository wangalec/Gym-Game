#ifndef EXERCISES_D_H
#define EXERCISES_D_H

#include "Foods.h"
#include "Exercises.h"

#include <fstream>
#include <iostream>
using namespace std;

class ExerciseDiscoveries{
    
private: 
    // Food foods_[5]; 
    // int num_foods_;

    // Food found_foods_[5];
    // int num_foods_found_;

    //possbile exercises
    Exercises exercises_[10];
    int num_exercises_;

    //found exercises that the play can use
    Exercises found_exercises_[10];
    int num_exercises_found_;


public: 
    // string getFood(int index);
    // bool addFood(string food, int index);
    
    // int readFoods(string filename);


    //exercises

    ExerciseDiscoveries();
    //changes found exercises 
    int getNumExercisesFound();

    string getExerciseName(int index);
    int getExerciseStrength(int index);
    bool addExercise(string name, int strength);
    
    //read exersises into exercises array
    string getAvailExerciseName(int index);
    int readExercises(string filename); 

};

#endif