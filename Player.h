// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player{
    private:
    string name_;
    int strength_;

    public:
    Player();
    Player(string name, int strength);
    string getName();
    void setName(string name);
    // int getHealth();
    // void setHealth(int health);
    int getStrength();
    void setStrength(int strength);
    // int getWeight();
    // void setWeight(int weight);
};

#endif