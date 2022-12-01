// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game

#ifndef NPC_H
#define NPC_H

#include <iostream>
#include <vector>
using namespace std;

class NPC{
    private: 
    string name_;
    vector<string> voicelines_; 

    public:
    NPC();
    string getName();
    void setName(string name);
    string getVoicelineAt(int index);
    void setVoicelineAt(int index, string voiceline);
};

#endif