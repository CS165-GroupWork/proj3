//
//  board.cpp
//  proj3
//
//  Created by Drey Platt on 3/5/16.
//  Copyright (c) 2016 Drey Platt. All rights reserved.
//

#include "includes.h"

using namespace std;
//this constructor creates a new game board
Board::Board()
{
    // make an array of pieces
    Piece * board[8][8];
    
    // the white army
    board[0][0] = new Rook  (true /*white*/);
    board[0][1] = new Knight(true /*white*/);
    board[0][2] = new Bishop(true /*white*/);
    board[0][3] = new Queen (true /*white*/);
    board[0][4] = new King  (true /*white*/);
    board[0][5] = new Bishop(true /*white*/);
    board[0][6] = new Knight(true /*white*/);
    board[0][7] = new Rook  (true /*white*/);
    
    // the pawns
    for (int col = 0; col < 8; col++)
    {
        board[1][col] = new Pawn  (true  /*white*/);
        board[6][col] = new Pawn  (false /*black*/);
    }
    
    // the spaces
    for (int row = 2; row < 6; row++)
        for (int col = 0; col < 8; col++)
            board[row][col] = new Space;
    
    // the black army
    board[7][0] = new Rook  (false /*black*/);
    board[7][1] = new Knight(false /*black*/);
    board[7][2] = new Bishop(false /*black*/);
    board[7][3] = new Queen (false /*black*/);
    board[7][4] = new King  (false /*black*/);
    board[7][5] = new Bishop(false /*black*/);
    board[7][6] = new Knight(false /*black*/);
    board[7][7] = new Rook  (false /*black*/);
    
    // display the board
    for (int row = 7; row >= 0; row--)
    {
        for (int col = 0; col < 8; col++)
            
            // go through and put this array into the Game.board object
            cout << *board[row][col];
        cout << endl;
    }
}

Board::~Board(){
// destroy everything
    for (int row = 0; row < 8; row++)
        for (int col = 0; col < 8; col++)
            delete board[row][col];
}
