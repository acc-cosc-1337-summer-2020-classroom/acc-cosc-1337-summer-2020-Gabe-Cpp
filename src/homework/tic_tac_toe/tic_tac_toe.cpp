//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over() {
    if (check_diag_win() || check_col_win () || check_row_win ()) {
        set_winner();
        return true;
    }
    else if(check_board_full()) {
        winner = "C";
        return true;
    }
    else {
        return false;
    }
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::display_board()const
{
    for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player= "O";
    }
    else
    {
        player= "X";
    }
}

bool TicTacToe::check_board_full()const
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(std::size_t i=0; i < pegs.size(); ++i)
    {
        pegs[i] = " ";
    }
}

std::string TicTacToe::get_winner() {
    return winner;
}

//0 = 3 = 6 or 1 = 4 = 7 or 2 = 5 = 8
bool TicTacToe::check_col_win() {
    for (std::size_t i= 0; i < 3; ++i) {
        if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6] && pegs[i + 6] != " ") {
            return true;
        }
    }
    return false;
}

// 0 = 1 = 2 or 3 = 4 = 5 or 6 = 7 = 8
bool TicTacToe::check_row_win() {
    for (std::size_t i= 0; i < 9; i += 3) {
        if (pegs[i] == pegs[i + 1] && pegs[i + 1] == pegs[i + 2] && pegs[i + 2] != " ") {
            return true;
        }
    }
    return false;
}

bool TicTacToe::check_diag_win() {
    if (pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[8] != " ") {
            return true;
        }
    else if (pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[6] != " ") {
            return true;
        }
    return false;
}

void TicTacToe::set_winner() {
    if (player == "X") {
        winner = "O";
    }
    winner = "X";
}
