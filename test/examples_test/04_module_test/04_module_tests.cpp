#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vec.h"
#include "strings.h"

using std::string;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum v function") {
	REQUIRE(sum ({2, 4, 6, 8}) == 20);
}

TEST_CASE("Test loop index, string reference parameter") {
	string name {"john"};
	loop_string_w_index (name);
	REQUIRE(name == "mary");
}