#include <iostream>
using namespace std;

#include "Exercises.h"
#include "Food.h"
#include "NPC.h"
#include "Player.h"

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
    testFood.setProtein(24);
    cout << testFood.getProtein() << endl;
    testFood.setCalories(120);
    cout << testFood.getCalories() << endl;

    //Testing exercises class
    Exercises testExercises("bench", "chest", 135);
    cout << testExercises.getName() << endl;
    cout << testExercises.getBodypart() << endl;
    cout << testExercises.getWeight() << endl;
    testExercises.setName("squat");
    testExercises.setBodypart("legs");
    testExercises.setWeight(225);
    cout << testExercises.getName() << endl;
    cout << testExercises.getBodypart() << endl;
    cout << testExercises.getWeight() << endl;
}

    //menu
    //each day has certain amount of times they can use it, 
    //eat, -> second layers
    //workout, -> second layers
    //explore map,
    //get advice (random component)
    //