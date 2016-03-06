//
//  displayBoard.h
//  proj3
//
//  Created by Drey Platt on 3/5/16.
//  Copyright (c) 2016 Drey Platt. All rights reserved.
//

#ifndef __proj3__displayBoard__
#define __proj3__displayBoard__


#include <stdio.h>
#include <iostream>
#include "main.h"

ostream & operator << (ostream & out, const Piece & rhs);
void displayBoard();

#endif /* defined(__proj3__displayBoard__) */
