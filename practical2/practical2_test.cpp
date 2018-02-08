/*
* Name   : practical2_test.cpp
* Purpose: To test the Search Functions
* Author : your name
* Version: 1.0
*/

// Use this definition to have catch run this file as main
#define CATCH_CONFIG_MAIN

// Use this definition when providing a user defined main 
//#define CATCH_CONFIG_RUNNER

#include "catch.hpp"
#include "Array.h"
#include "Search.h"

/**
 * UnOrdered Search Axioms
 */
TEST_CASE("UnOrdered Search Axioms", "[Search]")
{
	// arrange an ordered 10 element array
	Array<int> ua(10);
	ua[0] = 5; ua[1] = 10; ua[2] =  3; ua[3] = 11; ua[4] =  7; 
	ua[5] = 9; ua[6] =  3; ua[7] = 18; ua[8] =  5; ua[9] = 20;

	SECTION("Sequential Search Success")
	{
		//assert that 5 is found at position 0
		REQUIRE(sequentialSearch<int>(ua,5) == 0);

		// assert that 20 is found at postion 9		
		REQUIRE(sequentialSearch<int>(ua, 20) == 9);
	}

	SECTION("Sequential Search Failure")
	{
		//assert that 100 is not found 	
		REQUIRE(sequentialSearch<int>(ua, 100) == -1);
	}

	SECTION("Count occurence exists")
	{
		//assert that 3 is found twice	
		REQUIRE(countOccurrence<int>(ua, 3));
	}

	SECTION("Count occurence non existent")
	{
		//assert that counting occurrence of 100 returns 0	
		REQUIRE(countOccurrence<int>(ua, 100) == 0);
	}

	SECTION("Binary Search Success")
	{
		//assert that 5 is found at position 0
		REQUIRE(binarySsearch<int>(ua, 5) == 0);

		// assert that 20 is found at postion 9		
		REQUIRE(binarySsearch<int>(ua, 20) == 9);
	}

	SECTION("Binary Search Failure")
	{
		//assert that 100 is not found 	
		REQUIRE(binarySsearch<int>(ua, 100) == -1);
	}
}
TEST_CASE("Ordered Search Axioms", "[Sequential]")
{
	// arrange an ordered 10 element array
	Array<int> or(10);

	SECTION("Sequential Search Success")
	{
		//assert that 5 is found at position 0
		//REQUIRE(sequentialSearch<int>(ua,5) == 0);

		// assert that 20 is found at postion 9		
	}

	SECTION("Sequential Search Failure")
	{
		//assert that 100 is not found 	
	}

	SECTION("Count occurence exists")
	{
		//assert that 3 is found twice	
	}

	SECTION("Count occurence non existent")
	{
		//assert that counting occurrence of 100 returns 0	
	}
}