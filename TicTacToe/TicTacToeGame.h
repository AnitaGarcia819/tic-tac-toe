//
//  TicTacToeGame.h
//  TicTacToe
//
//  Created by Katie Cunningham on 11/30/15.
//  Copyright (c) 2015 Katie Cunningham. All rights reserved.
//

#ifndef __TicTacToe__TicTacToeGame__
#define __TicTacToe__TicTacToeGame__

#include <iostream>

using namespace std;

class TicTacToeGame
{

private:
   char gameBoard[3][3];
    
public:
    TicTacToeGame();
    void print();
    void playerOneMove(int row, int col);
    void playerTwoMov(int row, int col);
   
};

#endif /* defined(__TicTacToe__TicTacToeGame__) */
