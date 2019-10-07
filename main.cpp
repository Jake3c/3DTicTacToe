//
//  main.cpp
//  3D Tic Tac Toe
//
//  Created by Jake Carrico on 5/21/15.
//  Copyright (c) 2015 Jake Carrico. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Location.h"
#include "Board.h"
#include <string>

using namespace std;

int main(){
    
    board b;
    string s = "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    int l;
    char r;
    int c;
    int p=0;
    cout << s;
    b.display();
    
    while(b.isWon() == false){
        cout << "Player " << p%2+1 << "'s move: ";
        cin >> l >> r >> c;
        location tloc(l,r,c);
        if(b.isMoved(l, r, c) == false){
            b.move(tloc, (p%2)+1);
            cout << s;
            b.display();
            p++;
        }
        else cerr << "Error: Spot already taken.\n";
    }

    return 0;

}