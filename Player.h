#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;

class Player{
    private:
    string name_;
    int health_;
    int strength_;
    int weight_;

    public:
    Player();
    Player(string name, int health, int strength, int weight);
    string getName();
    void setName(string name);
    int getHealth();
    void setHealth(int health);
    int getStrength();
    void setStrength(int strength);
    int getWeight();
    void setWeight(int weight);
};

#endif