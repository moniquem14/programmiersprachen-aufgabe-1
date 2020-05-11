#define CATCH_CONFIG_RUNNER
#include <catch.hpp>


bool is_prime(int p) {
    if (p <= 1)
        return false;
    if (p == 2)
        return true;
    for (int i = 2; i <= sqrt(p); i++) {
        if (p % i == 0)
            return false;
    }
    return true;
}


TEST_CASE(" is_prime ", "[is_prime(int)]") {
    REQUIRE(!is_prime(-1));
    REQUIRE(!is_prime(0));
    REQUIRE(!is_prime(1));
    REQUIRE(is_prime(2));
    REQUIRE(is_prime(3));
    REQUIRE(is_prime(7));
    REQUIRE(!is_prime(11));
    REQUIRE(is_prime(42));

}

int main(int argc, char* argv[])
{
    
    return Catch::Session().run(argc, argv);
}