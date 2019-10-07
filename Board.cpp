//
//  Board.cpp
//  3D Tic Tac Toe
//
//  Created by Jake Carrico on 5/31/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.
//

#include "Board.h"

board::board(){
    location l(0,'A',0);
    vector<vector<vector<location> > >
    tempCube(4, vector<vector<location> > (4, vector<location> (4, l)));
    
    for(int i=0; i<tempCube.size(); i++){
        for(int n=0; n<tempCube[i].size(); n++){
            for(int p=0; p<tempCube[i][n].size(); p++){
                char c = n+65;
                location tloc(i+1,c,p+1);
                tempCube[i][n][p] = tloc;
            }
        }
    }
    cube = tempCube;
}


void board::move(location loc, int player){
    for(int i=0; i<cube.size(); i++){
        for(int n=0; n<cube[i].size(); n++){
            for(int p=0; p<cube[i][n].size(); p++){
                if(cube[i][n][p].getx() == loc.getx() &&
                   cube[i][n][p].gety() == loc.gety() &&
                   cube[i][n][p].getz() == loc.getz()){
                        if(cube[i][n][p].getStatus() != 0){
                            cerr << "Error: Spot already guessed";
                        }
                        else{cube[i][n][p].setStatus(player);}
                }
            }
        }
    }
}

bool board::isWon(){
    vector<location> p1bank;
    vector<location> p2bank;
    
    for(int i=0; i<cube.size(); i++){
        for(int n=0; n<cube[i].size(); n++){
            for(int p=0; p<cube[i][n].size(); p++){
                if(cube[i][n][p].getStatus() == 1){
                    p1bank.push_back(cube[i][n][p]);
                }
                else if(cube[i][n][p].getStatus() == 2){
                    p2bank.push_back(cube[i][n][p]);
                }
            }
        }
    }
    
    if(p1bank.size() >= 3){
        for(int i=0; i<p1bank.size()-3; i++){
            
            //4 in a row horizontally
            if(
                 (
                 p1bank[i].getx() == p1bank[i+1].getx() &&
                 p1bank[i].getx() == p1bank[i+2].getx() &&
                 p1bank[i].getx() == p1bank[i+3].getx()
                 )
                    &&
                 (
                 p1bank[i].gety() == p1bank[i+1].gety() &&
                 p1bank[i].gety() == p1bank[i+2].gety() &&
                 p1bank[i].gety() == p1bank[i+3].gety()
                 )
              ){
                    cout << "Player 1 wins!\n";
                    return true;
            }
            
        }
    }
    return false;
}

bool board::isMoved(int b, char c, int r){
    int a=c-65;
    if(cube[b-1][a][r-1].getStatus() != 0){
        return true;
    }
    else return false;
}

void board::display(){
    char c=0;
    for(int i=0; i<cube.size(); i++){
        cout << "    Board " << i+1 << '\n';
        for(int n=0; n<cube[i].size(); n++){
            c = n+65;
            cout << c;
            for(int p=0; p<cube[i][n].size(); p++){
                if(cube[i][n][p].getStatus() == 0){
                    cout << "[ ]";
                }
                else if(cube[i][n][p].getStatus() == 1){
                    cout << "[X]";
                }
                else if(cube[i][n][p].getStatus() == 2){
                    cout << "[O]";
                }
            }
            cout << '\n';
        }
        cout << "  1  2  3  4";
        cout << '\n' << '\n';
    }

}