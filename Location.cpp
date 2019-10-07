//
//  Location.cpp
//  3D Tic Tac Toe
//
//  Created by Jake Carrico on 5/21/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.
//

#include "Location.h"
#include <iostream>

using namespace std;

//constructor
location::location(int a, char b, int c){
    x=a;
    y=b;
    z=c;
    status=0;
}


//returns certain parts of class
int location::getStatus(){return status;}
int location::getx(){return x;}
char location::gety(){return y;}
int location::getz(){return z;}


//sets certain parts of class
void location::setStatus(int s){status = s;}
void location::setx(int a){x=a;}
void location::sety(char b){y=b;}
void location::setz(int c){z=c;}

//displays the location
void location::display(){cout << "(" << x << "," << y << "," << z << ")";}
