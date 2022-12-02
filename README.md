# Gym-Game
Gym Game for CSCI 1300 written in C++

Hello and welcome to Alec and Dorjee's Final CYO Project.
-----------------------
HOW TO COMPILE AND RUN
-----------------------
Compile: g++ --std=c++17 _main.cpp Map.cpp Exercises.cpp ExerciseDiscoveries.cpp Player.cpp Foods.cpp FoodDiscoveries.cpp finalBattle.h NPC.cpp
Run: ./a.out
-----------------------
DEPENDENCIES
-----------------------
All classes and .h files must be in the same directory as the main (which should already be the case)
-----------------------
SUBMISSION INFORMATION
-----------------------
CSCI1300 Fall 2022 Final Project
Authors: Alec Wang and Dorjee Zhang
Recitiation: 103 Ojasvi Bhalerao
Date: December 1, 2022
-----------------------
ABOUT THIS PROJECT
-----------------------
This is a game inspired by our love for the gym. We are both very passionate about hitting the gym and staying fit because we suffered from insecurities about ourselves. Currently we hit together at least 4 days a week, where we're on the Push Pull Legs split. The foods and exercises were inspired by our favorite exercises, such as squat bench and deadlift, as well as our favorite (and least favorite) foods. For example we both really like milk, but hate vegetables because it has no protein. The final boss battle was a combination of Snorlax from pokemon ASCII art, and we named him Nikocado (the mukbang youtuber). We hope you will enjoy your time on the game. 

Technical Aspects:
There are 6 menu options, where you can move on the map, investigate, eat foods that you've found, do exercises that you've found, get inspirational advice, and quit the game. Eating and Exercises have second layers to choose which exercise or food to use. Exploring (investigating) has a random component probability value (20% chance of food, 30% chance of exercise). Getting advice also uses a random variable to determine what message to display. We have 5 classes to facilitate the game (NPC, Foods, Exercises) and also overarching classes (ExerciseDiscoveries, FoodDiscoveries) that implement an array of Foods/Exercises. We also use fileIO to read in foods, exercises, and voicelines. There is also final battle with several stages as well as a persistent scoreboard that uses fileIO to write and read all playthroughs as well as a sorting algorithm (bubble sort) when it outputs the scoreboard. There are plenty of if/else statements, loops, and nested loops.
