// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#include <iostream>
using namespace std;

#include "Player.h"

Player::Player(){
    name_ = "";
    //health_ = 0;
    strength_ = 0;
    //weight_ = 0;
}

Player::Player(string name, int strength){
    name_ = name;
    //health_ = health;
    strength_ = strength;
    //weight_ = weight;
}

string Player::getName(){
    return name_;
}

void Player::setName(string name){
    name_ = name;
}

// int Player::getHealth(){
//     return health_;
// }

// void Player::setHealth(int health){
//     if (health < 0 || health > 100){
//         throw invalid_argument("Health out of bounds");
//         return;
//     }
//     health_ = health;
// }

int Player::getStrength(){
    return strength_;
}

void Player::setStrength(int strength){
    // if (strength < 0 || strength > 100){
    //     throw invalid_argument("Strength out of bounds");
    //     return;
    // }
    strength_ = strength;
}

// int Player::getWeight(){
//     return weight_;
// }

// void Player::setWeight(int weight){
//     weight_ = weight;
// }
