//
//  Location.h
//  3D Tic Tac Toe
//
//  Created by Jake Carrico on 5/21/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.
//

#ifndef ___D_Tic_Tac_Toe__Location__
#define ___D_Tic_Tac_Toe__Location__

#include <iostream>


class location{
  private:
    int x;
    char y;
    int z;
    int status;
    
  public:
    location(int a, char b, int c);
    
    int getStatus();
    int getx();
    char gety();
    int getz();
    
    void setStatus(int s);
    void setx(int x);
    void sety(char y);
    void setz(int z);
    
    void display();
    
};


#endif /* defined(___D_Tic_Tac_Toe__Location__) */
