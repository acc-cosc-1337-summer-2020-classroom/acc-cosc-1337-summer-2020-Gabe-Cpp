#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount constructor") {
	BankAccount account(500);

	REQUIRE(account.get_balance() == 500);
}

TEST_CASE("Test Bank account deposit") {
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.deposit(50);
	REQUIRE(account.get_balance() == 550);
}

TEST_CASE("Test Bank account withdraw") {
	BankAccount account(500);
	REQUIRE(account.get_balance() == 500);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 450);
}

TEST_CASE("Test Bank account default constructor balance 0") {
	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test Bank account initial open deposit >= 25") {
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.open(25);
	REQUIRE(account.get_balance() == 25);
}

TEST_CASE("Test Bank account initial open deposit <= 25") {
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	REQUIRE_THROWS_AS(account.open(24), Invalid);
}

TEST_CASE("Test Bank account static rate initialization") {
	BankAccount account;
	REQUIRE(account.get_rate() == 0.025);
}