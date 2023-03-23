#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "in_class_lab_eight.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing functions") {
    SUBCASE("test_input.txt"){
        vector<vector<int>> expected {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8}
        };

        vector<vector<int>> result = read_graphs("test_input.txt");

        CHECK(result == expected);
    }
    SUBCASE("graph1.txt"){
        vector<vector<int>> expected {
        {1, 3},
        {4, 6},
        {6, 8},
        {10, 3},
        {1},
        {},
        {1, 1, 1, 1, 1}
        };

        vector<vector<int>> result = read_graphs("graph1.txt");
        CHECK(result == expected);
    }
}