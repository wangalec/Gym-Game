#include <iostream>
using namespace std;

#include "Food.h"

Food::Food()
{
    name_ = "";
}

string Food::getName(){
    return name_;
}

void Food::setName(string name){
    name_ = name;
}