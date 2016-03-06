//
//  board.h
//  proj3
//
//  Created by Drey Platt on 3/5/16.
//  Copyright (c) 2016 Drey Platt. All rights reserved.
//

#ifndef __proj3__board__
#define __proj3__board__
#include "includes.h"
#include <stdio.h>
/*****************************************
 * BOARD
 * The board class.
 *****************************************/
class Board
{
public:
    Board();                        //constructor for a new game board
    ~Board();                       //deconstructor
    bool getIsWhiteTurn() const  { return isWhiteTurn; }
    bool getfSimple() const      { return fSimple; }
    bool getCurrentMove() const  { return currentMove; }
protected:
    bool isWhiteTurn;
    bool fSimple;   // is starting off in Test mode?
    int  currentMove;   // is starting at move 0?
};
#endif /* defined(__proj3__board__) */
