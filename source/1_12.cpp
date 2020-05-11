#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

// Berechnung des Volumens eines Zylinders
double cyl_volume(double rad, double hgt) {
    if (rad < 0 || hgt < 0) {
        return -1;
    }
    return hgt * (M_PI * rad * rad);
}

// Berechnung der Oberflaeche eines Zylinders
double cyl_surface(double rad, double hgt) {
    if (rad < 0 || hgt < 0) {
        return -1;
    }
    return (2 * M_PI * rad * hgt) + (2 * M_PI * rad * rad);
}
}

// TDD Volumen
TEST_CASE("describe_cyl_volume", "[cyl_volume]") {
    REQUIRE(cyl_volume(1, 1) == Approx(3.14159));
    REQUIRE(cyl_volume(-1, 1) == -1);
    REQUIRE(cyl_volume(1, -1) == -1);
    REQUIRE(cyl_volume(0, 0) == 0);
    REQUIRE(cyl_volume(13, 7) == Approx(3716.5));
}

// TTD Oberflaeche
TEST_CASE("describe_cyl_surface", "[cyl_surface]") {
    REQUIRE(cyl_surface(1, 1) == Approx(12.5664));
    REQUIRE(cyl_surface(-1, 1) == -1);
    REQUIRE(cyl_surface(1, -1) == -1);
    REQUIRE(cyl_surface(0, 0) == 0);
    REQUIRE(cyl_surface(13, 7) == Approx(1633.63));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}