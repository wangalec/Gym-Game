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
5 Menu options
2nd layer (food and exercises)
Random component: exploring has a probability value (20% chance of food, 30% chance of exercise), 
getting advice also uses a random variable to determine what message to display
We have 5 classes (NPC, Foods, Exercises) and also overarching classes (ExerciseDiscoveries, FoodDiscoveries) 
that implement an array of Foods/Exercises
We also use fileIO to read in foods, exercises, and voicelines
There is a final battle 
There is also a Persistent Scoreboard that uses fileIO as well as a sorting algorithm (bubble sort) when it outputs the Scoreboard
