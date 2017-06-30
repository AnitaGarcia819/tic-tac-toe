//
//  TicTacToeGame.cpp
//  TicTacToe
//
//  Created by Katie Cunningham on 11/30/15.
//  Copyright (c) 2015 Katie Cunningham. All rights reserved.
//

#include "TicTacToeGame.h"

TicTacToeGame::TicTacToeGame()
{
    for (int row=0; row < 3; row++)
        for (int col=0; col < 3; col++)
            gameBoard[row][col] = ' ';
}

void TicTacToeGame::print()
{
    for (int row=1; row < 3; row++)
    {
        


        for (int col=1; col < 3; col++)
        {
            cout << gameBoard[col][row];

            if (col == 1 || col == 2) // don't need a | after 3rd col
            cout << "|";
            
        }
        // horizontal line
        if (row == 0 || row == 1 || row == 2)
            cout << endl << "-+-+-" << endl;
    }
    
    cout << endl << endl;
    
}

void TicTacToeGame::playerOneMove(int row, int col) {
    
   gameBoard[col][row] = 'x';
}

void TicTacToeGame::playerTwoMove(int row, int col) {

    gameBoard[row][col] = 'o';
}
