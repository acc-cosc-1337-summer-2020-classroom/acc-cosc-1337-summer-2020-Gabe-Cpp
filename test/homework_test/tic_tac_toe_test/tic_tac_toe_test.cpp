#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game ends when the board is full")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");


	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);	
	tic_tac_toe.mark_board(8);
	REQUIRE(tic_tac_toe.game_over() == true);
	REQUIRE(tic_tac_toe.get_winner() == "C");     

}

TEST_CASE("Test first player set to X")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test first player set to 0")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("0");
	REQUIRE(tic_tac_toe.get_player() == "0");
}

//player X 1,4,7 for win
TEST_CASE("Test first column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 2,5,8 for win
TEST_CASE("Test second column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(2); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 3,6,9 for win
TEST_CASE("Test third column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(3); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 1,2,3 => for win
TEST_CASE("Test first line")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 4,5,6 for win
TEST_CASE("Test second line")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(4); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 7,8,9 for win
TEST_CASE("Test third line")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(7); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 1,5,9 for win
TEST_CASE("Test win diagonally from top left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}

//player X 7,5,3 for win
TEST_CASE("Test win diagonally from bottom left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(7); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //0
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //X
	REQUIRE(tic_tac_toe.game_over() == true);
}