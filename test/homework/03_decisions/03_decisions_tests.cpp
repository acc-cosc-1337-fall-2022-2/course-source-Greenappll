#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("get_letter_grade_using_if test1"){
	REQUIRE(get_letter_grade_using_if(95) == "A");
}
TEST_CASE("get_letter_grade_using_if test2"){
	REQUIRE(get_letter_grade_using_if(85) == "B");
}
TEST_CASE("get_letter_grade_using_if test3"){
	REQUIRE(get_letter_grade_using_if(75) == "C");
}
TEST_CASE("get_letter_grade_using_if test4"){
	REQUIRE(get_letter_grade_using_if(65) == "D");
}
TEST_CASE("get_letter_grade_using_if test5"){
	REQUIRE(get_letter_grade_using_if(50) == "F");
}

TEST_CASE("get_letter_grade_using_switch test1"){
	REQUIRE(get_letter_grade_using_if(95) == "A");
}
TEST_CASE("get_letter_grade_using_if test2"){
	REQUIRE(get_letter_grade_using_if(85) == "B");
}
TEST_CASE("get_letter_grade_using_if test3"){
	REQUIRE(get_letter_grade_using_if(75) == "C");
}
TEST_CASE("get_letter_grade_using_if test4"){
	REQUIRE(get_letter_grade_using_if(65) == "D");
}
TEST_CASE("get_letter_grade_using_if test5"){
	REQUIRE(get_letter_grade_using_if(50) == "F");
}

