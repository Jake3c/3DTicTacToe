//
//  Board.h
//  3D Tic Tac Toe
//
//  Created by Jake Carrico on 5/31/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.
//

#ifndef ___D_Tic_Tac_Toe__Board__
#define ___D_Tic_Tac_Toe__Board__

#include <iostream>
#include <vector>
#include "Location.h"

using namespace std;

class board{
  private:
    vector<vector<vector<location> > > cube;
    
  public:
    board();
    
    void move(location loc, int player);
    
    bool isWon();
    bool isMoved(int b, char c, int r);
    
    void display();

    
};


#endif /* defined(___D_Tic_Tac_Toe__Board__) */
