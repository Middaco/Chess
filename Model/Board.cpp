//
// Created by Asus on 06.05.2023.
//

#include "Board.h"
#include <string>

#define PAWN_ID 1
#define ROOK_ID 2
#define KNIGHT_ID 3
#define BISHOP_ID 4
#define QUEEN_ID 5
#define KING_ID 6

std::string convert_position(int row, int column){
    std::string converted_position_into_chess_position;
    return converted_position_into_chess_position;
}

Board::Board() {
    int current_row, current_column;
    for(current_row = 1; current_row < ROWS_OF_BOARD; current_row++){
        for(current_column = 1; current_column < COLUMNS_OF_BOARD; current_column++){
            chess_board[current_row][current_column] = 0;
            if(current_row == PAWNS_ROW || current_row == ENEMY_PAWNS_ROW){
                chess_board[current_row][current_column] = PAWN_ID;
            }else if(current_row == FIRST_ROOK_POSITION)
        }
    }
}
