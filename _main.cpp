#include <iostream>
using namespace std;

//#include "Exercises.h"
//#include "Food.h"

#include "ExerciseDiscoveries.h"
#include "NPC.h"
#include "Player.h"
#include "Map.h"


void menu()
{ //menu function
    cout << "----Main Menu----" << endl;
    cout << "1. Move" << endl;
    cout << "2. Investigate" << endl;
    cout << "3. Eat" << endl;
    cout << "4. Train" << endl;
    cout << "5. Display Stats" << endl;
    cout << "6. Give up" << endl;
}

int main(){
    //initializing all classes for use
    Map map;
    ExerciseDiscoveries exercises;
    Player player;

    int result = exercises.readExercises("exercises.txt");
    // cout << result << endl;
    // for(int i = 0; i < 10; i++){
    //     cout << i << exercises.getAvailExerciseName(i) << endl;
    // }

    // string input_name;
    // cout << "Enter your name: " << endl;
    // cin >> input_name;
    // player.setName(input_name);

    int input;
    while (true)
    {
        if(player.getStrength() >= 100){
            cout << "You have reached 100 strength. Now you must beat the final boss" << endl;
            break;
        }

        map.displayMap();
        menu(); 
        cin >> input; 
            
        if (input == 1)//move
        {   
            char move_input;
            while (true)
            {
                cout << "Use wasd to move" << endl;
                cin >> move_input;
                if (move_input == 'w' || move_input == 'a' || move_input == 's' || move_input == 'd') {
                    break;
                }
            }
            map.move(move_input);
        }

        //RANDOM COMPONENT
        else if (input == 2) //investigate
        {
            int random_num = rand()%4;
            cout << random_num << endl;
            if (random_num == 0){
                cout << "You have found nothing. Keep grinding brah don't give up" << endl;
            }
            else if (random_num == 1){
                cout << "You have discovered a new food!" << endl;
            }
            else if (random_num == 2){
                cout << "You have discovered a new exercise!" << endl;
            }
            else if (random_num == 3){
                cout << "You have met an NPC!" << endl;
            }
            map.exploreSpace(map.getPlayerRow(), map.getPlayerCol());
        }

        else if (input == 3) //eat
        {
            
        }

        else if (input == 4) //train
        {   
            int num_exercises = exercises.getNumExercisesFound();
            if (num_exercises == 0){
                cout << "No exercises yet. Explore the map to find exercises!" << endl;
            }
            else{
                int ex_input;
                cout << "Pick an exercise: " << endl;
                for(int i = 0; i < num_exercises; i++){
                    cout << i+1 << ". " << exercises.getExerciseName(i) 
                    << " | " << exercises.getExerciseStrength(i) << " Strength" << endl;
                }
                cin >> ex_input;
                int new_strength = player.getStrength();
                new_strength += exercises.getExerciseStrength(ex_input - 1);
                player.setStrength(new_strength);
            }
        }

        else if (input == 5) //display stats
        {
            cout << "Your STATS: " << endl
            << "Name: " << player.getName() << endl
            << "Strength: " << player.getStrength() << endl
            << "Exercises Found: "  << exercises.getNumExercisesFound() << endl
            << "Foods Found: " << endl;
        }

        else if (input == 6)
        {
            cout << "ZYZZ is disappointed you gave up. Come back soon to complete your training." << endl;
            break;
        }

        else 
        {
            cout << "What the Fuark brah? Enter a number between 1 and 6!" << endl;
        }
    }

    return 0;
}