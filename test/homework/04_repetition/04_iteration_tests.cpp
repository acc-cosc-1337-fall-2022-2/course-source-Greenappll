#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.cpp"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("factorial 1"){
	REQUIRE(factorial(3) == 6);
}

TEST_CASE("factorial 2"){
	REQUIRE(factorial(5) == 120);
}

TEST_CASE("factorial 3"){
	REQUIRE(factorial(6) == 720);
}
