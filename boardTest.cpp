/***********************************************************************
* Program:
*    Project 3, Chess with Objects
*    Brother Helfrich, CS165
* Author:
*    Br. Helfrich
* Summary: 
*    This driver program will help us test a Board class
************************************************************************/

#include "includes.h"
using namespace std;



// Two statics in the Piece class: the simple flag indicating that we
//    have the Test board displayed instead of the colorful board, and
//    the currentMove so each piece can tell if it's move was the last move

/*************************************
 * main
 **************************************/
int main()
{
   // initialize the board
   Board board;

   // remove the white pawns
   Position pos;
   pos.setRow(1);
   for (pos.setCol(0); pos.isValid(); pos.adjustCol(1))
      board -= pos;    // this will remove a pice at position 'pos'

   // display the board, minus a few pawns
   cout << board;

   // prompt for a position
   cout << "What position do you want to probe? ";
   cin  >> pos;

   // display the piece at that position
   cout << "The piece at " << pos << " is " << board[pos] << endl;

   // display all the possible moves for a piece at that position
   if (board[pos] != ' ')
   {
      vector <Move> possibilities;
      cout << "Possible moves are:\n";
      board[pos].getMoves(possibilities, board);
      for (int i = 0; i < possibilities.size(); i++)
         cout << "\t" << possibilities[i] << endl;
   }
   
   return 0;

}

