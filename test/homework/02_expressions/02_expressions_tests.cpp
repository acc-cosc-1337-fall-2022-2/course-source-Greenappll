#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

TEST_CASE("Test Get Sales Tax"){
	REQUIRE(get_sales_tax_amount(10) == 0.675);
}

TEST_CASE("Test Get Sales Tax 2"){
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}

TEST_CASE("Test Get Tip Amount"){
	REQUIRE(get_tip_amount(20, 0.15) == 3);
}

TEST_CASE("Test Get Tip Amount 2"){
	REQUIRE(get_tip_amount(20, 0.20) == 4);
}


