##define CATCH_CONFIG_RUNNER
#include <catch.hpp>

double fract(double d) {
    int a = d;
    double erg = d - (double)a;
    return erg;

}

TEST_CASE("describe_fract", "[fract]") {
    REQUIRE(fract(2.23442) == Approx(0.23442));
    REQUIRE(fract(91.211113) == Approx(0.211113));
    REQUIRE(fract(3.307) == Approx(0.307));
    REQUIRE(fract(-4.0) == Approx(0));
    REQUIRE(fract(-33.4303857548767) == Approx(-0.4303857548767));

}
int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}