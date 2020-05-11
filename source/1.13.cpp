#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int factorial(int n)
{
    int c, f = 1;

    for (c = 1; c <= n; c++)
        f = f * c;

    return 0;
}

TEST_CASE("describe_factorial", "[factorial]")
{
    REQUIRE(factorial(6) == 720);
    REQUIRE(factorial(9) == 362880);
}

int main(int argc, char* argv[])
{
    std::cout << f << std::endl;
    return Catch::Session().run(argc, argv)
}