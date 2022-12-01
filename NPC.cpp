// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#include <iostream>
#include <vector>
using namespace std;

#include "NPC.h"

NPC::NPC(){
    name_ = "";
}

string NPC::getName(){
    return name_;
}

void NPC::setName(string name){
    name_ = name;
}

string NPC::getVoicelineAt(int index){
    //need to implement out of bounds exception
    return voicelines_.at(index);
}

void NPC::setVoicelineAt(int index, string voiceline){
    voicelines_.insert(voicelines_.begin() + index, voiceline);
}