/*
This program was created by Sasha Morgan.
The purpose of this program is the run a search on an inputed file and return the closets value;
PID: sasha97
*/
#include <string>
#include <vector>
#include <cxxtest/TestSuite.h>

#include "search.h"
#include <string>
#include <iostream>


class SearchTests : public CxxTest::TestSuite
{
public:
	//linear search
	//Checks to see if the value 16 is found, returns true, the value of 16, and position
	void testsearch1(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29 };
		SearchResultType<int> trial1 = linear_search(myints, 16);
		TS_ASSERT_EQUALS(trial1.found, true);
		TS_ASSERT_EQUALS(trial1.value, 16);
		TS_ASSERT_EQUALS(trial1.index, 0);
	}
	void testsearch2(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29 };
		SearchResultType<int> trial1 = linear_search(myints, 77);
		TS_ASSERT_EQUALS(trial1.found, true);
		TS_ASSERT_EQUALS(trial1.value, 77);
		TS_ASSERT_EQUALS(trial1.index, 2);
	}

	void testsearch3(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29 };
		SearchResultType<int> trial1 = linear_search(myints, 3);
		TS_ASSERT_EQUALS(trial1.found, false);
		TS_ASSERT_EQUALS(trial1.value, 16);
		TS_ASSERT_EQUALS(trial1.index, 0);
	}
	void testsearch4(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29, 10 };
		SearchResultType<int> trial1 = iterative_binary_search(myints, 77);
		TS_ASSERT_EQUALS(trial1.found, true);
		TS_ASSERT_EQUALS(trial1.value, 77);
		TS_ASSERT_EQUALS(trial1.index, 2);
	}
	void testsearch6(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29 };
		SearchResultType<int> trial1 = iterative_binary_search(myints, 3);
		TS_ASSERT_EQUALS(trial1.found, false);
		TS_ASSERT_EQUALS(trial1.value, 16);
		TS_ASSERT_EQUALS(trial1.index, 0);
	}
	void testsearch5(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29, 10 };
		SearchResultType<int> trial1 = recursive_binary_search(myints, 77);
		TS_ASSERT_EQUALS(trial1.found, true);
		TS_ASSERT_EQUALS(trial1.value, 77);
		TS_ASSERT_EQUALS(trial1.index, 2);
	}
	void testsearch7(void)
	{
		std::vector<int> myints;
		myints = { 16, 2, 77, 29 };
		SearchResultType<int> trial1 = iterative_binary_search(myints, 3);
		TS_ASSERT_EQUALS(trial1.found, false);
		TS_ASSERT_EQUALS(trial1.value, 16);
		TS_ASSERT_EQUALS(trial1.index, 0);
	}
};

