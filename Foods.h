#ifndef FOODS_H
#define FOODS_H

#include <iostream>
using namespace std;

class Foods
{
    private:
    string name_;
    int strength_;

    public:
    Foods();
    Foods(string name, int strength);
    string getName();
    void setName(string name);
    int getStrength();
    void setStrength(int strength);
};

#endif