#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int sum_multiples()
{
    int summe = 0, j = 1;

    while (j <= 1000)
    {

        if (j % 3 == 0 || j % 5 == 0)
        {
            summe += j;
        }

        j++; // Zählvariable erhöhen, sonst hätten wir eine endlosschleife
    }

    return summe;
}


TEST_CASE("describe_sum_multiples", "[sum_multiples]")
{
    REQUIRE(sum_multiples());
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
    std::cout << summe;
}