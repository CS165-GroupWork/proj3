//
//  main.h
//  proj3
//
//  Created by Drey Platt on 3/5/16.
//  Copyright (c) 2016 Drey Platt. All rights reserved.

//  This document includes all the Game class


#ifndef __proj3__main__
#define __proj3__main__
//c++ files
#include <iostream>
#include <string>
#include <cassert>
#include <sstream>

//all of the projects files
#include "piece.h"
#include "move.h"
#include "position.h"
#include "displayBoard.h"
#include "main.h"
#include "board.h"
/*****************************************
 * GAME
 * The game class.
 *****************************************/
class Game
{
public:
    Game()                       {fSimple = false; isWhiteTurn = true; currentMove = 0;} //constructor for a new game
    bool getIsWhiteTurn() const  { return isWhiteTurn; }
    bool getfSimple() const      { return fSimple; }
    bool getCurrentMove() const  { return currentMove; }
    Board board;
protected:
    bool isWhiteTurn;
    bool fSimple;   // is starting off in Test mode?
    int  currentMove;   // is starting at move 0?
};
#endif /* defined(__proj3__main__) */
