#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;

int finalBattle()
{
int health = 1000;
bool y = true;
bool z = true;
bool i = true;
bool j = true;
bool k = true;
int input = 0;
srand(time(NULL));
int random = (rand() % 5) + 1;
int guess = 0;
int moves = 0;
int guesses = 0;
cout << "Villain: Your power level has reached 100. Most impressive." << endl;
cout << "However, you are foolish if you think that's enough to defeat me." << endl;
cout << "I am everything you could ever ask for." << endl;
usleep(2999990);
cout << "\e[1mYou\e[0m: From my countless hours of training, I have learned to pursue delayed gratification." << endl;
cout << "I know your true identity, \e[1mNikocado!\e[0m" << endl;
cout << "Villain: ..." << endl;
usleep(2999990);
cout << "\e[1mTakes Hood Off\e[0m" << endl;
cout << "\e[1mNikocado\e[0m: I will end you once and for all!" << endl;
cout << " " << endl;
usleep(1000);
cout << "Y" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "u" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "h" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "v" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "n" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "m" << flush;
usleep(100000);
cout << "b" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "!" << endl;
usleep(100000);
bool x = true;
cout << "Phase 1: Guess The Number" << endl;
while (health == 1000)
{
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣿⣶⣦⣄⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣤⣶⣾⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⢀⡀⣄⠀⠀⠀⠀⠀⠀⠀⣿⣿⠟⠉⠀⢀⣀⠀⠀⠈⠉⠀⠀⣀⣀⠀⠀⠙⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣀⣶⣿⣿⣿⣾⣇⠀⠀⠀⠀⢀⣿⠃⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⣼⡏⠀⠀⠀⣀⣀⣉⠉⠩⠭⠭⠭⠥⠤⢀⣀⣀⠀⠀⠀⢻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣿⠷⠒⠋⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠑⠒⠼⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢹⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣶⣤⣄⣠⣤⣤⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⡞⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⡀⠀⠀" << endl;
cout << "⢀⣸⣀⡀⠀⠀⠀⠀⣠⣴⣾⣿⣷⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣰⣿⣿⣿⣿⣷⣦⠀⠀⠀⠀⢿⣿⠿⠃⠀" << endl;
cout << "⠘⢿⡿⠃⠀⠀⠀⣸⣿⣿⣿⣿⣿⡿⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⢻⣿⣿⣿⣿⣿⣿⠂⠀⠀⠀⡸⠁⠀⠀⠀" << endl;
cout << "⠀⠀⠳⣄⠀⠀⠀⠹⣿⣿⣿⡿⠛⣠⠾⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠳⣄⠙⠛⠿⠿⠛⠉⠀⠀⣀⠜⠁⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⠑⠢⠤⠤⠬⠭⠥⠖⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠒⠢⠤⠤⠤⠒⠊⠁⠀⠀⠀⠀⠀⠀" << endl;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "f" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "y" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "u" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "!" << flush;
cout << " " << endl;

while (x == true)
{
do
{
    moves++;
    cout << "Enter a number between 1 and 5" << endl;
    cin >> guess;
    if (guess == random)
    {
        cout << "Congrats! Your attack landed after " << moves << " attempts. Nikocado is at 750hp." << endl;
    }
    else if (guess < random)
    {
        cout << "Your guess is too small! Try a bigger number before Nikocado flees!" << endl;
    }
    else
    {
        cout << "Your guess is too big! Try a smaller number before Nikocado runs away!" << endl;
    }
    x = false;
} while (guess != random);
}
while (y == true)
{
usleep(2999990);
cout << " " << endl;
cout << " " << endl;
cout << "⣿⡅⠀⠈⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⠈⣿" << endl;
cout << "⣿⡇⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⢸⣿" << endl;
cout << "⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿" << endl;
cout << "⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿" << endl;
cout << "⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿" << endl;
cout << "⣿⣿⡆⠀⠀⠀⠀⠀⢀⣤⣦⡀⠀⠀⠀⠀⠀⠀⢀⣴⣤⡀⠀⠀⠀⠀⠀⢰⣿⣿" << endl;
cout << "⣿⡿⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣄⠀⠀⠀⠀⣠⣾⣿⣿⣿⣷⡀⠀⠀⠀⠀⢿⣿" << endl;
cout << "⣿⡇⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣧⡀⢀⣼⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⢸⣿" << endl;
cout << "⣿⡇⠀⠀⢀⣿⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⣿⡀⠀⠀⢀⣿" << endl;
cout << "⣿⡇⠀⠀⢸⣿⣶⣶⣶⣤⣤⣀⠉⣻⣿⣿⣟⠋⣁⣠⣤⣤⣤⣤⣿⡇⠀⠀⢸⣿" << endl;
cout << "⣿⣷⡀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢀⣾⣿" << endl;
cout << "⣿⣿⣧⡀⠻⣿⣿⣿⣿⣿⠟⠉⢿⣿⣿⣿⣿⡿⠉⠻⣿⣿⣿⣿⣿⠟⢀⣼⣿⣿" << endl;
cout << "⣿⣿⣿⣷⣄⠙⢿⣿⣧⣄⣀⠀⠘⠛⠛⠛⠛⠃⠀⣀⣠⣼⣿⡿⠋⣠⣾⣿⣿⣿" << endl;
cout << "⣿⣿⣿⣿⣿⣶⣄⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⣠⣶⣿⣿⣿⣿⣿" << endl;
cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⣈⠉⠉⠉⠉⠉⠉⣁⣠⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
cout << "Nikocado is enraged by the attack!" << endl;
cout << " " << endl;
cout << " " << endl;
cout << "Phase 2: Guess the riddle" << endl;
usleep(2999990);
y = false;
}
health = 750;
}
while (health == 750)
{
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣿⣶⣦⣄⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣤⣶⣾⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⢀⡀⣄⠀⠀⠀⠀⠀⠀⠀⣿⣿⠟⠉⠀⢀⣀⠀⠀⠈⠉⠀⠀⣀⣀⠀⠀⠙⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣀⣶⣿⣿⣿⣾⣇⠀⠀⠀⠀⢀⣿⠃⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⣼⡏⠀⠀⠀⣀⣀⣉⠉⠩⠭⠭⠭⠥⠤⢀⣀⣀⠀⠀⠀⢻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣿⠷⠒⠋⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠑⠒⠼⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢹⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣶⣤⣄⣠⣤⣤⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⡞⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⡀⠀⠀" << endl;
cout << "⢀⣸⣀⡀⠀⠀⠀⠀⣠⣴⣾⣿⣷⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣰⣿⣿⣿⣿⣷⣦⠀⠀⠀⠀⢿⣿⠿⠃⠀" << endl;
cout << "⠘⢿⡿⠃⠀⠀⠀⣸⣿⣿⣿⣿⣿⡿⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⢻⣿⣿⣿⣿⣿⣿⠂⠀⠀⠀⡸⠁⠀⠀⠀" << endl;
cout << "⠀⠀⠳⣄⠀⠀⠀⠹⣿⣿⣿⡿⠛⣠⠾⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠳⣄⠙⠛⠿⠿⠛⠉⠀⠀⣀⠜⠁⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⠑⠢⠤⠤⠬⠭⠥⠖⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠒⠢⠤⠤⠤⠒⠊⠁⠀⠀⠀⠀⠀⠀" << endl;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "f" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "y" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "u" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "!" << flush;
cout << " " << endl;

while (i == true)
{
do
{
    guesses++;
    cout << "What walks on 4 legs, then 2 legs, then 3?" << endl;
    cout << "1. A bird" << endl;
    cout << "2. An autobot" << endl;
    cout << "3. A mammoth" << endl;
    cout << "4. A man" << endl;
    cin >> input;
    if (input == 4)
    {
        cout << "Congrats! That is the correct answer. Your attack landed after " << guesses << " attempts. Nikocado is now at 500hp." << endl;
        health = 500;
        moves = 0;
    }
    else
    {
        cout << "Nikocado is disappointed with your attempt. Try again" << endl;
        cout << " " << endl;
    }
    i = false;
} while (input != 4);

}
while (z == true)
{
usleep(2999990);
cout << " " << endl;
cout << " " << endl;
cout << "⣿⡅⠀⠈⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⠁⠀⠈⣿" << endl;
cout << "⣿⡇⠀⠀⠀⠀⠀⠀⠉⠻⣿⣿⣿⣿⡿⢿⣿⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⢸⣿" << endl;
cout << "⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿" << endl;
cout << "⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⣿" << endl;
cout << "⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿" << endl;
cout << "⣿⣿⡆⠀⠀⠀⠀⠀⢀⣤⣦⡀⠀⠀⠀⠀⠀⠀⢀⣴⣤⡀⠀⠀⠀⠀⠀⢰⣿⣿" << endl;
cout << "⣿⡿⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣄⠀⠀⠀⠀⣠⣾⣿⣿⣿⣷⡀⠀⠀⠀⠀⢿⣿" << endl;
cout << "⣿⡇⠀⠀⠀⢰⣿⣿⣿⣿⣿⣿⣿⣧⡀⢀⣼⣿⣿⣿⣿⣿⣿⣿⡆⠀⠀⠀⢸⣿" << endl;
cout << "⣿⡇⠀⠀⢀⣿⠿⠿⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⠿⠿⣿⡀⠀⠀⢀⣿" << endl;
cout << "⣿⡇⠀⠀⢸⣿⣶⣶⣶⣤⣤⣀⠉⣻⣿⣿⣟⠋⣁⣠⣤⣤⣤⣤⣿⡇⠀⠀⢸⣿" << endl;
cout << "⣿⣷⡀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⢀⣾⣿" << endl;
cout << "⣿⣿⣧⡀⠻⣿⣿⣿⣿⣿⠟⠉⢿⣿⣿⣿⣿⡿⠉⠻⣿⣿⣿⣿⣿⠟⢀⣼⣿⣿" << endl;
cout << "⣿⣿⣿⣷⣄⠙⢿⣿⣧⣄⣀⠀⠘⠛⠛⠛⠛⠃⠀⣀⣠⣼⣿⡿⠋⣠⣾⣿⣿⣿" << endl;
cout << "⣿⣿⣿⣿⣿⣶⣄⠉⠛⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⠉⣠⣶⣿⣿⣿⣿⣿" << endl;
cout << "⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣄⣈⠉⠉⠉⠉⠉⠉⣁⣠⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿" << endl;
cout << "Nikocado is enraged by the attack!" << endl;
cout << " " << endl;
cout << " " << endl;
usleep(2999990);
z = false;
health = 500;
cout << "Phase 3: Multiplication Tables." << endl;
}
while (health == 500)
{
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣿⣶⣦⣄⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣤⣶⣾⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠿⠿⠿⣿⣿⣿⣿⠿⠿⠿⢿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⢀⡀⣄⠀⠀⠀⠀⠀⠀⠀⣿⣿⠟⠉⠀⢀⣀⠀⠀⠈⠉⠀⠀⣀⣀⠀⠀⠙⢿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣀⣶⣿⣿⣿⣾⣇⠀⠀⠀⠀⢀⣿⠃⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠹⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢻⣿⣿⣿⣿⣿⣿⣷⣄⠀⠀⣼⡏⠀⠀⠀⣀⣀⣉⠉⠩⠭⠭⠭⠥⠤⢀⣀⣀⠀⠀⠀⢻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⣸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⣿⠷⠒⠋⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠑⠒⠼⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢹⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣷⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢹⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⠀⣿⣿⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣧⡀⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢠⣿⣿⣿⣿⣿⣶⣤⣄⣠⣤⣤⣶⣶⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣶⣶⣶⣶⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⠀" << endl;
cout << "⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⠀" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⣀⠀⢸⡿⠿⣿⡿⠋⠉⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠉⠀⠻⠿⠟⠉⢙⣿⣿⣿⣿⣿⣿⡇" << endl;
cout << "⠀⠀⡞⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣇⡀⠀⠀" << endl;
cout << "⢀⣸⣀⡀⠀⠀⠀⠀⣠⣴⣾⣿⣷⣆⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⣰⣿⣿⣿⣿⣷⣦⠀⠀⠀⠀⢿⣿⠿⠃⠀" << endl;
cout << "⠘⢿⡿⠃⠀⠀⠀⣸⣿⣿⣿⣿⣿⡿⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⢻⣿⣿⣿⣿⣿⣿⠂⠀⠀⠀⡸⠁⠀⠀⠀" << endl;
cout << "⠀⠀⠳⣄⠀⠀⠀⠹⣿⣿⣿⡿⠛⣠⠾⠿⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠿⠿⠳⣄⠙⠛⠿⠿⠛⠉⠀⠀⣀⠜⠁⠀⠀⠀⠀" << endl;
cout << "⠀⠀⠀⠈⠑⠢⠤⠤⠬⠭⠥⠖⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠒⠢⠤⠤⠤⠒⠊⠁⠀⠀⠀⠀⠀⠀" << endl;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "i" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "f" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "y" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "u" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "t" << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "c" << flush;
usleep(100000);
cout << "k" << flush;
usleep(100000);
cout << "!" << flush;
cout << " " << endl;

while (k == true)
{
do
{
    cout << "Lets start simple: what's 4x4?" << endl;
    cin >> input;
    if (input == 16)
    {
cout << "G" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "n" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "." << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "x" << flush;
usleep(100000);
cout << "t" << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
cout << " " << endl; 
    }
    else 
    {
        cout << "Your attack missed! Nikocado throws an attack and you can't dodge. You died! Start again." << endl;
        return 0;
    }

    cout << "What's 9x6?" << endl;
    cin >> input;
    if (input == 54)
    {
cout << "G" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "n" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "." << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "x" << flush;
usleep(100000);
cout << "t" << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
cout << " " << endl;
    }
    else 
    {
        cout << "Your attack missed! Nikocado throws an attack and you can't dodge. You died! Start again." << endl;
        return 0;
    }

    cout << "What's 8x5?" << endl;
    cin >> input;
    if (input == 40)
    {
cout << "G" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "n" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "." << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "N" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "x" << flush;
usleep(100000);
cout << "t" << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
cout << " " << endl;
    }
    else 
    {
        cout << "Nikocado throws an attack and you can't dodge. You died! Start again." << endl;
        return 0;
    }

    cout << "The final question: what's 12x12?" << endl;
    cin >> input;
    if (input == 144)
    {
cout << "G" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "d" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "n" << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "." << flush;
usleep(100000);
cout << "." << flush;
usleep(100000);
cout << "." << flush;
usleep(200000);
cout << "." << flush;
cout << " " << endl;
    }
    else 
    {
        cout << "Your attack missed! Nikocado throws an attack and you can't dodge. You died! Start again." << endl;
        return 0;
    }
    k = false;
} while (k != false);
}
health = 250;
}
while (health == 250)
{
usleep(100500);
cout << "\e[1mSeeing your determination and power, Nikocado is fearful and lowers his guard! -250hp\e[0m" << endl;
health = 0;
cout << "Nikocado:" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "H" << flush;
usleep(300000);
cout << "o" << flush;
usleep(100000);
cout << "w" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "a" << flush;
usleep(100000);
cout << "r" << flush;
usleep(100000);
cout << "e" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "y" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << "u" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "s" << flush;
usleep(100000);
cout << "o" << flush;
usleep(100000);
cout << " " << flush;
usleep(100000);
cout << "p" << flush;
usleep(105000);
cout << "o" << flush;
usleep(105000);
cout << "w" << flush;
usleep(200000);
cout << "e" << flush;
usleep(200000);
cout << "r" << flush;
usleep(200000);
cout << "f" << flush;
usleep(300000);
cout << "-" << flush;
usleep(300000);
cout << "." << flush;
usleep(399999);
cout << "." << flush;
usleep(1999999);
cout << "." << endl;
usleep(200000);
cout << "As Nikocado falls to his knees and dies, you couldn't help but feel pitty for him, realizing his potential." << endl;
cout << "You have defeated the most evil creature in the land. You finally rest, and watch the sun rise on a grateful universe." << endl;
cout << " " << endl;
cout << " " << endl;
cout << " " << endl;
usleep(2000000);
cout << "Thank you for playing the gym game by Alec Wang and Dorjee Zhang!" << endl;
return 0;
}
}
}
