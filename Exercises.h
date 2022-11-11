#ifndef EXERCISES_H
#define EXERCISES_H

#include <iostream>
using namespace std;

class Exercises{
    private:
    string name_;
    string bodypart_;
    int weight_;

    public:
    Exercises();
    Exercises(string name, string bodypart, int weight);
    string getName();
    void setName(string name);
    string getBodypart();
    void setBodypart(string bodypart);
    int getWeight();
    void setWeight(int weight);

};

#endif
//bench, squat, DL, OHP