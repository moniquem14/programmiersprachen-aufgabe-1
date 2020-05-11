#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath> 

float berech_o(float h, float r)
{
    float O, V;
    float pi;
    pi = 3.14;

    O = 2 * r * h * pi + 2 * (r * r) * pi;
    std::cout << "Oberflaeche: " << O;
    return 0;
}

float berech_v(float h, float r)
{
    float O, V;
    float pi;
    pi = 3.14;

    V = (r * r) * h * pi;
    std::cout << "Volumen: " << V;
    return 0;
}

TEST_CASE("describe_berech_o", "[berech_o]")
{
    REQUIRE(berech(6, 9) == 848.23);
    REQUIRE(berech(13, 9) == 1244.071);
    REQUIRE(berech(3, 24) == 4071.504);
}

TEST_CASE("describe_berech_v", "[berech_v]")
{
    REQUIRE(berech(6, 9) == 1526.814);
    REQUIRE(berech(13, 9) == 3308.097);
    REQUIRE(berech(3, 24) == 5428.672);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}