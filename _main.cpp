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

while (isTrue == 1)
{
    menu(); 
    cin >> input; 
    cin.ignore(32767, '\n'); // ignores 32767 characters so that input can be changeable 
        
        if (input == 1)
        {
        
        } 

        else if (input == 2)
        {

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
            isTrue = 0;
        }

        else 
        {
            cout << "What the Fuark brah? Enter a number between 1 and 6!" << endl;
            input;
        }
}
}