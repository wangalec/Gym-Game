#include <iostream>
using namespace std;

#include "Exercises.h"
#include "Food.h"
#include "NPC.h"
#include "Player.h"
#include "Map.h"

int main(){
        //Testing Player Class
    Player testPlayer("name", 5, 5, 5);
    cout << testPlayer.getHealth() << endl;
    cout << testPlayer.getName() << endl;
    cout << testPlayer.getStrength() << endl;
    cout << testPlayer.getWeight() << endl;
    testPlayer.setHealth(11);
    testPlayer.setName("name_two");
    testPlayer.setStrength(11);
    testPlayer.setWeight(22);
    cout << testPlayer.getHealth() << endl;
    cout << testPlayer.getName() << endl;
    cout << testPlayer.getStrength() << endl;
    cout << testPlayer.getWeight() << endl;

    //Testing NPC Class
    NPC testNPC;
    testNPC.setName("name");
    cout << testNPC.getName() << endl;
    testNPC.setVoicelineAt(0, "Hi");
    cout << testNPC.getVoicelineAt(0) << endl;

    //Testing food class
    Food testFood;
    testFood.setName("whey");
    cout << testFood.getName() << endl;

    //Testing exercises class
    Exercises testExercises("chest", 3);
    cout << testExercises.getName() << endl;

    testExercises.setName("squat");
    cout << testExercises.getName() << endl;

    Map map;
    map.displayMap();   
}



    //menu
    //each day has certain amount of times they can use it, 
    //eat, -> second layers
    //workout, -> second layers
    //explore map,
    //get advice (random component)
    //