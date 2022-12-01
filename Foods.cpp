// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#include <iostream>
using namespace std;

#include "Foods.h"


Foods::Foods()
{
    name_ = "";
    strength_ = 0;
}

Foods::Foods(string name, int strength)
{
    name_ = name;
    strength_ = strength;
}

string Foods::getName()
{
    return name_;
}

void Foods::setName(string name)
{
    name_ = name;
}

int Foods::getStrength(){
    return strength_;
}

void Foods::setStrength(int strength){
    strength_ = strength;
}
