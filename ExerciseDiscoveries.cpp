#include "Food.h"
#include "Exercises.h"

#include <fstream>
#include <iostream>
using namespace std;

#include "ExerciseDiscoveries.h"

//exercises

ExerciseDiscoveries::ExerciseDiscoveries(){
    num_exercises_ = 0;
    num_exercises_found_ = 0;
}

//adds to found exercises 
int ExerciseDiscoveries::getNumExercisesFound(){
    return num_exercises_found_;
}

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
    return true;
}

//adds to exercises array

string ExerciseDiscoveries::getAvailExerciseName(int index){
    return exercises_[index].getName();
}

int ExerciseDiscoveries::getAvailExerciseStrength(int index){
    return exercises_[index].getStrength();
}

int ExerciseDiscoveries::readExercises(string filename){
    if (num_exercises_ == 10) return -1;
    string line;
    ifstream input;
    input.open(filename);

    if(input.fail()) return -1;

    while(getline(input, line)){
        //cout << "while loops" << endl;
        string arr[2];
        for(int i = 0; i < line.length(); i++){
            if (line[i] == ','){
                arr[0] = line.substr(0,i);
                arr[1] = line.substr(i+1,1);
            }
        }
        //cout << arr[0] << " " << arr[1] << endl;
        exercises_[num_exercises_] = Exercises(arr[0], stoi(arr[1]));
        //cout << "exercise put" << endl;
        num_exercises_++;
        if (num_exercises_ == 10) return 0;
    }

    input.close();
    return 1;
}
