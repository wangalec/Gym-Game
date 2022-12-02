// CSCI 1300 Final Project | CYO
// Alec and Dorjee's Gym Game


#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

//#include "Exercises.h"
//#include "Food.h"

#include "ExerciseDiscoveries.h"
#include "FoodDiscoveries.h"
#include "NPC.h"
#include "Player.h"
#include "Map.h"
#include "finalbattle.h"

void starter()
{
    cout << "       ZYZZ welcomes you to the Gym Game designed by Alec Wang and Dorjee Zhang." << endl;
    usleep(1000000);
    cout << "                               ⣿⣿⣿⣿⠏⠌⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⣿⣿⠀⠀⠸⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⣿⠃⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⡿⠃⠀⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⠃⠀⠀⣾⣿⣿⣿⣿⣿⣦⠀⠈⠻⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⠀⠀⠀⣿⣿⣿⠟⠉⠉⠉⢃⣤⠀⠈⢿⣿⣿" << endl;
    cout << "                               ⣿⠀⠀⠀⢸⣿⡟⠀⠀⠀⠀⢹⣿⣧⠀⠀⠙⣿" << endl;
    cout << "                               ⣿⡆⠀⠀⠈⠻⡅⠀⠀⠀⠀⣸⣿⠿⠇⠀⠀⢸" << endl;
    cout << "                               ⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠔⠛⠁⠀⠀⠀⣠⣿" << endl;
    cout << "                               ⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿" << endl;
    cout << "                               ⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                               ⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿" << endl;
    cout << "                          We're all gonna make it brah." << endl;
    usleep(4199999);
    cout << "In this game, you wll discover exercises and foods that will increase your strength." << endl;
    usleep(5000000);
    cout << "Each exercise you find will increase your strength by a specific value." << endl;
    usleep(5000000);
    cout << "Each food you discover will also increase your strength. Sometimes, foods won't affect your strength." << endl;
    usleep(6000000);
    cout << "Once your strength reaches level 100, you will fight the final boss." << endl;
    usleep(3000000);
    cout << "You will now be taken to the main menu." << endl << endl;
}

void menu()
{ //menu function
    //system("Color 0A");
    cout << "=-------Main Menu------=" << endl;
    cout << " | 1. Move            |" << endl;
    cout << " | 2. Investigate     |" << endl;
    cout << " | 3. Eat             |" << endl;
    cout << " | 4. Train           |" << endl;
    cout << " | 5. Get Advice      |" << endl;
    cout << " | 6. Give up         |" << endl;
    cout << " |ᕙ(=▀̿ĺ̯▀̿)ᕗ  ᕙ(▀̿ĺ̯▀̿ ̿)ᕗ  |" << endl << endl;
    //system("Color 07");
}

int main(){
    //initializing all classes for use
    Map map;
    ExerciseDiscoveries exercises;
    FoodDiscoveries foods;
    Player player;
    NPC npc;

    //set up all classes
    exercises.readExercises("exercises.txt");
    foods.readFoods("Foods.txt");
    npc.readNPC("NPC.txt");

    // cout << "Voicelines" << endl;
    // for(int i = 0; i < 9; i++){
    //     cout << i << " | " << npc.getVoicelineAt(i) << endl;
    // }

    string input_name;
    cout << "Enter your name: " << endl;
    cin >> input_name;
    cout << "" << endl;
    player.setName(input_name);

    string input;
    int exercise_tracker = 0;
    int food_tracker = 0;
    //for leaderboard
    int player_moves = -1;

    starter();

    while (true)
    {
        if(player.getStrength() >= 100){
            cout << "You have reached 100 strength. Now you must beat the final boss" << endl;
            break;
        }

        player_moves++;

        cout << endl;
        cout << "=----------STATS---------=" << endl
            << " |Your name is: " << player.getName() << ""<< endl
            << " |Current Strength is: " << player.getStrength() << "" << endl
            << " |Exercises: "  << exercises.getNumExercisesFound() << "" << endl
            << " |Foods: " << foods.getNumFoodsFound() << "" << endl
            << " |Number of Moves: " << player_moves << endl;
        cout << " |ʕっ•ᴥ•ʔっ ( •͡˘ _•͡˘)" << endl;
        cout << " " << endl;
        //map.displayMap();
        menu(); 


        cin >> input; 
            
        if (input == "1")//move
        {   
            char move_input;
            while (true)
            {
                map.displayMap();
                cout << "Use wasd to move" << endl;
                cin >> move_input;
                if (move_input == 'w' || move_input == 'a' || move_input == 's' || move_input == 'd') {
                    break;
                }
                else{
                    cout << "Wrong key, try again" << endl;
                }
            }
            map.move(move_input);
            cout << endl;
        }

        //RANDOM COMPONENT
        else if (input == "2") //investigate
        {
            if(map.isExplored(map.getPlayerRow(), map.getPlayerCol())){
                cout << "You have already explored this space. Explore a different space by moving!" << endl << endl;
                continue;
            }
            map.displayMap();
            int random_num = rand()%100;

            if (random_num >= 0 && random_num <= 20){ //20 percent chance of finding food
                if (food_tracker == 5){
                    cout << "Great job brah! You found every food!" << endl;
                }
                string name = foods.getAvailFoodName(food_tracker);
                int strength = foods.getAvailFoodStrength(food_tracker);
                foods.addFoods(name, strength);
                food_tracker++;
                cout << "Fuark yeah brah. Great job discovering new food!" << endl;
                cout << "You have discovered " << name << " that has strength " << strength << endl;
            }
            else if (random_num > 20 && random_num <=50){ //30 percent chance of finding an exercise
                if(exercise_tracker == 10){
                    cout << "You have discovered all exercises! Keep it up!" << endl;
                }
                string name = exercises.getAvailExerciseName(exercise_tracker);
                int strength = exercises.getAvailExerciseStrength(exercise_tracker);
                exercises.addExercise(name, strength);
                exercise_tracker++;
                cout << "Let's go chief! New Exercise found." << endl;
                cout << "You have discovered " << name << " that gives you strength " << strength << endl;
            }
            else{ //50% chance of finding nothing
                cout << "You have found nothing. Keep grinding brah don't give up" << endl;
            }
            map.exploreSpace(map.getPlayerRow(), map.getPlayerCol());
            cout << endl;
        }

        else if (input == "3") //eat
        {
            int num_foods = foods.getNumFoodsFound();
            if(num_foods == 0){
                cout << "No foods yet. Explore the map to find new foods!" << endl;
            }
            else{
                cout << "Pick a food: " << endl;
                for(int i = 0; i < num_foods; i++){
                    cout << i+1 << " . " << foods.getFoodName(i)
                    << " | " << foods.getFoodStrength(i) << endl;
                }
                int fd_input;
                cin >> fd_input;
                while(true){
                    if ((fd_input > 0) && (fd_input < 6))
                    {
                        int new_strength = player.getStrength();
                        new_strength += foods.getFoodStrength(fd_input - 1);
                        player.setStrength(new_strength);
                        cout << "You satisfied your hunger with " << foods.getFoodName(fd_input - 1) <<
                        " that gave you strength " << foods.getFoodStrength(fd_input - 1) << endl;
                        break;
                    }
                    else{
                        cout << "Invalid input, enter a number for a food that you've found" << endl;
                        cin >> fd_input;
                    }
                }
            }
            cout << endl;
        }

        else if (input == "4") //train
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
                while(true){
                if ((ex_input > 0) && (ex_input < 11))
                {
                    int new_strength = player.getStrength();
                    new_strength += exercises.getExerciseStrength(ex_input - 1);
                    player.setStrength(new_strength);
                    cout << "Your set of " << exercises.getExerciseName(ex_input - 1)
                    << " has increase your strength by " << exercises.getExerciseStrength(ex_input -1 ) << endl;
                    break;
                }
                else{
                    cout << "Invalid input, enter a number for an exercise you have already discovered." << endl;
                    cin >> ex_input;
                }
            }
            }
            cout << endl;
        }
        //random component
        else if (input == "5") //get advice
        {
            int num = rand()%npc.getNumLines();
            cout << "Everyone needs guidance in their journey. Read the next message closely" << endl;
            cout << npc.getVoicelineAt(num) << endl << endl;
        }

        else if (input == "6")
        {
            cout << "ZYZZ is disappointed you gave up. Come back soon to complete your training." << endl;
            return 0;
        }

        else if (input == "OVERRIDE"){
            player_moves = rand()%50;
            player.setStrength(101);
        }
        else 
        {
            cout << "What the Fuark brah? Enter a number between 1 and 6!" << endl;
            cin >> input;
        }
    }

    //finalBattle();

    int score = 100 - player_moves + foods.getNumFoodsFound() + exercises.getNumExercisesFound();
    if(score < 0) score = 0;

    struct leaderboard{
        string name;
        int score;
    };

    vector<leaderboard> players;

    ofstream file("leaderboard.txt", ios::app);
    //file.open("leaderboard.txt");
    file << player.getName() << "," << score << "\n";
    file.close();

    ifstream file_read;
    string line;
    file_read.open("leaderboard.txt");
    while(getline(file_read, line)){
        if(line.empty()) continue;
        string arr[2];
        for(int i = 0; i < line.length(); i++){
            if(line[i] == ','){
                arr[0] = line.substr(0,i);
                arr[1] = line.substr(i+1, line.length() - i - 1);
            }
        }
        leaderboard temp;
        temp.name = arr[0];
        temp.score = stoi(arr[1]);
        players.push_back(temp);
    }

    //bubblesort!
    int length = players.size();
    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(players.at(j).score < players.at(j+1).score){
                leaderboard temp = players.at(j);
                players.at(j) = players.at(j+1);
                players.at(j+1) = temp;
                //swap(players[j], players[j+1]);
            }
        }
    }
    cout << endl;
    cout << "LEADERBOARD" << endl;
    for(int i = 0; i < length; i++){
        cout << "Name: " << players.at(i).name << " | Score: " << players.at(i).score << endl;
    }

    return 0;
}