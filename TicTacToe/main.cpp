//
//  main.cpp
//  TicTacToe
//
//  Created by Katie Cunningham on 11/30/15.
//  Copyright (c) 2015 Katie Cunningham. All rights reserved.
//

#include <iostream>
#include "TicTacToeGame.h"

int main()
{
    TicTacToeGame mytttgame;
    
    print();
    
    /*
     o| |
     -+-+-
      |x|
     -+-+-
      | |
     */
    
    playerOneMove(1, 1);
    
    print();
    
    playerTwoMove(0, 0);
    
    print();
    
    playerOneMove(0, 2);
    
    print();
    
    playerTwoMove(2, 0);
    
    
    return 0;
}
