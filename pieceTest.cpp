/***********************************************************************
* Program:
*    Project 3, Chess with Objects
*    Brother Helfrich, CS165
* Author:
*    Br. Helfrich
* Summary: 
*    This driver program will help us test the piece classes
************************************************************************/

#include <iostream>
#include "piece.h"
#include "move.h"
#include "position.h"
using namespace std;



/*************************************
 * main
 **************************************/
int main()
{
    
   // rook
   Rook rook(0 /*row*/, 0 /*col*/, true /*white*/);
   cout << "rook:   " << rook << endl;

   // bishop
   Bishop bishop(0, 1, false /*white*/);
   cout << "bishop: " << bishop << endl;

   // knight
   Knight knight(0, 2, true /*white*/);
   cout << "knight: " << knight << endl;

   // queen
   Queen queen(0, 3, false /*white*/);
   cout << "queen:  " << queen << endl;

   // king
   King king(0, 4, true /*white*/);
   cout << "king:   " << king << endl;

   // pawn
   Pawn pawn(0, 5, false /*white*/);
   cout << "pawn:   " << pawn << endl;

   // space
   Space space(0, 6);
   cout << "space:  " << space << endl;
   
   // make a list of pieces
   Piece * list[7] =
   {
      &rook,
      &bishop,
      &knight,
      &queen,
      &king,
      &pawn,
      &space
   };
   for (int i = 0; i < 7; i++)
      cout << *list[i];
   cout << endl;
      
   
   return 0;

}

