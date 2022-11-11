#include <iostream>
using namespace std;

#include "Exercises.h"

Exercises::Exercises()
{
    name_ = "";
    bodypart_ = "";
    weight_ = 0;
}

Exercises::Exercises(string name, string bodypart, int weight)
{
    name_ = name;
    bodypart_ = bodypart;
    weight_ = weight;
}

string Exercises::getName()
{
    return name_;
}

void Exercises::setName(string name)
{
    name_ = name;
}

string Exercises::getBodypart()
{
    return bodypart_;
}

void Exercises::setBodypart(string bodypart)
{
    bodypart_ = bodypart;
}

int Exercises::getWeight()
{
    return weight_;
}

void Exercises::setWeight(int weight)
{
    weight_ = weight;
}