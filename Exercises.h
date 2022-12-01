// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#ifndef EXERCISES_H
#define EXERCISES_H

#include <iostream>
using namespace std;

class Exercises{
    private:
    string name_;
    int strength_;

    public:
    Exercises();
    Exercises(string name, int strength);
    string getName();
    void setName(string name);
    int getStrength();
    void setStrength(int strength);
    // string getBodypart();
    // void setBodypart(string bodypart);
    // int getWeight();
    // void setWeight(int weight);

};

#endif
//bench, squat, DL, OHP