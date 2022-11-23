#include <iostream>
using namespace std;

#include "Exercises.h"
#include "Food.h"
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
    Map map;
    map.displayMap();

    bool isTrue = 1;
    int input;

    while (true)
    {
        menu(); 
        cin >> input; 
        //cin.ignore(32767, '\n'); // ignores 32767 characters so that input can be changeable 
            
            if (input == 1)//move
            {   
                while (true)
                {
                    char move_input;
                    cout << "Use wasd to move" << endl;
                    cin >> move_input;
                    if (move_input == 'w' || move_input == 'a' || move_input == 's' || move_input == 'd') {
                        break;
                    }
                }
                map.move(input);
            }

            //RANDOM COMPONENT
            else if (input == 2) //investigate
            {
                random_num = rand() %4;
                if (random_num == 0){
                    cout << "You have found nothing. Keep grinding brah don't give up" << endl;
                }
                else if (random_num == 1){
                    cout << "You have discovered a new food!" << endl;
                }
                else if (random_num == 2){
                    cout << "You have discovered a new exercise!" << endl;
                }
                else if (random_num == 4){
                    cout << "You have met an NPC!" << endl;
                }
                map.exploreSpace();
            }

            else if (input == 3)
            {

            }

            else if (input == 4)
            {

            }

            else if (input == 5)
            {

            }

            else if (input == 6)
            {
                cout << "ZYZZ is disappointed you gave up. Come back soon to complete your training." << endl;
                break;
            }

            else 
            {
                cout << "What the Fuark brah? Enter a number between 1 and 6!" << endl;
                input;
            }
    }
    return 0;
}