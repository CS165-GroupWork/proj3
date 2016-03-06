//
//  piece.h
//  proj3
//
//  Created by Drey Platt on 3/5/16.
//  Copyright (c) 2016 Drey Platt. All rights reserved.
//

#ifndef __proj3__piece__
#define __proj3__piece__

#include <stdio.h>
#include <cassert>
#include "main.h"
#include "position.h"
using namespace std;

/*****************************************
 * PIECE
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Piece
{
public:
    Piece(bool isWhite) : isWhite(isWhite)  {                  }
    Piece(int row, int col, bool isWhite)   {                  }
    virtual char getLetter() const = 0;
    virtual int getScore() const = 0;
    bool getIsWhite() const                 { return isWhite;  }
    Position getCurrentPosition()           { return position; }
protected:
    bool isWhite;
    Position position; //give pieces a position
};


/*****************************************
 * KING
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class King : public Piece
{
public:
    King(bool isItWhite): Piece(isItWhite)  {                              }
    char getLetter()  const                      {return (isWhite) ? 'k' : 'K'; }
    int getScore() const                              {return (isWhite) ? 100 : -100;}
};
/*****************************************
 * QUEEN
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Queen : public Piece
{
public:
    Queen(bool isItWhite): Piece(isItWhite) {                              }
    char getLetter() const                       {return (isWhite) ? 'q' : 'Q'; }
    int getScore()   const                            {return (isWhite) ? 9 : -9;  }
};
/*****************************************
 * PAWN
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Pawn : public Piece
{
public:
    Pawn(bool isItWhite): Piece(isItWhite)  {                              }
    char getLetter() const                       {return (isWhite) ? 'p' : 'P'; }
    int getScore()const                                 {return (isWhite) ? 1 : -1;    }
};
/*****************************************
 * ROOK
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Rook : public Piece
{
public:
    Rook(bool isItWhite): Piece(isItWhite)  {                              }
    char getLetter() const          {return (isWhite) ? 'r' : 'R'; }
    int getScore()    const                      {return (isWhite) ? 5 : -5;}
};
/*****************************************
 * BISHOP
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Bishop : public Piece
{
public:
    Bishop(bool isItWhite): Piece(isItWhite) {                              }
    char getLetter() const           {return (isWhite) ? 'b' : 'B'; }
    int getScore()   const                        {return (isWhite) ? 3 : -3;  }
};
/*****************************************
 * KNIGHT
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Knight : public Piece
{
public:
    Knight(bool isItWhite): Piece(isItWhite)  {                              }
    char getLetter() const            {return (isWhite) ? 'n' : 'N'; }
    int getScore()   const                         {return (isWhite) ? 3 : -3;    }
};
/*****************************************
 * KNIGHT
 * The base piece class.  You are not allowed
 * to change the definition of Piece in any way
 *****************************************/
class Space : public Piece
{
public:
    Space() : Piece(false){}
    char getLetter() const  { return ' '; }
    int getScore() const { return 0;}
};



#endif /* defined(__proj3__piece__) */
