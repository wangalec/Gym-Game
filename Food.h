#ifndef FOOD_H
#define FOOD_H

#include <iostream>
using namespace std;

class Food{
    private:
    string name_;
    int protein_;
    int calories_;
    
    public:
    Food();
    string getName();
    void setName(string name);
    int getProtein();
    void setProtein(int protein);
    int getCalories();
    void setCalories(int calories);
};

#endif