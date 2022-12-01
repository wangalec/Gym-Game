// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

#include "NPC.h"



NPC::NPC(){
   //name_ = "";
}

// string NPC::getName(){
//     return name_;
// }

// void NPC::setName(string name){
//     name_ = name;
// }

string NPC::getVoicelineAt(int index){
    //need to implement out of bounds exception
    return voicelines_.at(index);
}

void NPC::setVoicelineAt(int index, string voiceline){
    voicelines_.insert(voicelines_.begin() + index, voiceline);
}

int NPC::getNumLines(){
    return voicelines_.size();
}

bool NPC::readNPC(string filename){
    string line;
    ifstream input;
    input.open(filename);

    if (input.fail()) return false;

    while(getline(input, line)){
        voicelines_.push_back(line);
    }

    input.close();
    return true;
}