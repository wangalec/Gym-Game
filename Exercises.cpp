#include <iostream>
using namespace std;

#include "Exercises.h"

Exercises::Exercises()
{
    name_ = "";
    strength_ = 0;
    // bodypart_ = "";
    // weight_ = 0;
}

Exercises::Exercises(string name, int strength)
{
    name_ = name;
    strength_ = strength;
    // bodypart_ = bodypart;
    // weight_ = weight;
}

string Exercises::getName()
{
    return name_;
}

void Exercises::setName(string name)
{
    name_ = name;
}

int Exercises::getStrength(){
    return strength_;
}

void Exercises::setStrength(int strength){
    strength_ = strength;
}


// string Exercises::getBodypart()
// {
//     return bodypart_;
// }

// void Exercises::setBodypart(string bodypart)
// {
//     bodypart_ = bodypart;
// }

// int Exercises::getWeight()
// {
//     return weight_;
// }

// void Exercises::setWeight(int weight)
// {
//     weight_ = weight;
// }