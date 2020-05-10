#include <iostream>
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

int checksum(int a)
{
    int quersumme = 0;

    while (a > 0)
    {
        quersumme += a % 10;
        a /= 10;
    }

    std::cout << "Quersumme: " << quersumme << std::endl;

    return 0;
}

TEST_CASE("describe_checksum", "[checksum]")
{
    REQUIRE(checksum(34) == 7);
    REQUIRE(checksum(78) == 15);
    REQUIRE(checksum(145) == 10);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv)
}
