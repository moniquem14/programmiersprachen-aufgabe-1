#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

double fract(double a)
{
	double i;
	double f = modf(a, &i);
	return f;
}

TEST_CASE("describe_fract", "[fract]")
{
	REQUIRE(0.45 == Approx(3.45));
	REQUIRE(0.79 == Approx(6.79));
	REQUIRE(0.145 == Approx(7.145));
}

int main(int argc, char* argv[])
{
	std::cout << f << std::endl;
	return Catch::Session().run(argc, argv);
}