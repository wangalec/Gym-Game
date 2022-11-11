#include <iostream>
using namespace std;

#include "Food.h"

Food::Food()
{
    name_ = "";
}

string Food::getName(){
    return name_;
}

void Food::setName(string name){
    name_ = name;
}

int Food::getProtein()
{
    return protein_;
}

void Food::setProtein(int protein)
{
    if (protein < 0)
    {
        throw invalid_argument("Protein out of bounds");
        return;
    }

    protein_ = protein;
}

int Food::getCalories()
{
    return calories_;
}

void Food::setCalories(int calories)
{
    if (calories < 0)
    {
        throw invalid_argument("Calories out of bounds");
        return;
    }

    calories_ = calories;
}