#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

bool is_prime(int Number)
{
    for (int i = 2; i <= Number - 1; i++)
    {
        if (Number % i == 0) return true;
    }
    return false;
}

TEST_CASE("describe_is_prime", "[is_prime]")
{
    REQUIRE(is_prime(34) == false);
    REQUIRE(is_prime(13) == true);
}

int main(int argc, char* argv[])
{
    
    return Catch::Session().run(argc, argv);
}